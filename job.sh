#!/bin/bash
#SBATCH --job-name=matrix_multiplication
#SBATCH --output=result.txt
#SBATCH --error=error.txt
#SBATCH --time=00:10:00
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=2
#SBATCH --cpus-per-task=1

# Run the containerized application
echo "Job started!"
singularity exec prova2.sif mpirun -np 2 /sweng_project_part2/build/main
