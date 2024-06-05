#!/bin/bash
#SBATCH --job-name=matrix_multiplication
#SBATCH --output=result.txt
#SBATCH --error=error.txt
#SBATCH --time=00:10:00
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4

# Run the containerized application
echo "Job started!"
singularity run my_container.sif
#rm -rf sweng_project_part2
