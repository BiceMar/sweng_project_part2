#!/bin/bash
#SBATCH --job-name=matrix_multiplication
#SBATCH --output=result.txt
#SBATCH --error=error.txt
#SBATCH --time=01:00:00
#SBATCH --partition=compute
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4

# Load Singularity module
module load singularity

# Run the containerized application
#singularity exec /path/to/my_container.sif /path/to/matrix_multiplication_program
singularity test my_container.sif
echo "Testtttt!"
