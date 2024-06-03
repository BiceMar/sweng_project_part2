#!/bin/bash
#SBATCH --job-name=matrix_multiplication
#SBATCH --output=result.txt
#SBATCH --error=error.txt
#SBATCH --time=00:10:00
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --account=a08trb63

# Load Singularity module
module load singularity

# Run the containerized application
#singularity exec /path/to/my_container.sif /path/to/matrix_multiplication_program
echo "Testtttt!"
singularity test my_container.sif
