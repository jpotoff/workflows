{% extends "slurm.sh" %}

{% block header %}
{% set gpus = operations|map(attribute='directives.ngpu')|sum %}
    {{- super () -}}

{% if gpus %}
#SBATCH  --gpus-per-node=1
#SBATCH --ntasks-per-gpu=1
{%- endif %}

{% set walltime = operations |calc_walltime(parallel) %}
{% if walltime %}
#SBATCH --time {{walltime|format_timedelta}}
{% endif %}

{% block tasks %}
#SBATCH --cpus-per-task={{operations|calc_tasks('np',parallel, force) }}
{% endblock tasks %}
#SBATCH -N 1
#SBATCH --mail-type=END
#SBATCH --mail-user=jpotoff@wayne.edu
#SBATCH -o output-%j.dat
#SBATCH -e error-%j.dat
#SBATCH --ntasks-per-core=1

echo  "Running on host" $HOSTNAME
echo  "Time is" date

conda activate mg

#module load python/3.9
#module swap gnu7 intel/2019

{% if gpus %}
#module load cuda/11.0
{%- endif %}

{% endblock header %}

{% block body %}
    {{- super () -}}


{% endblock body %}
