#!/bin/bash
#SBATCH --job-name=samu
#SBATCH --partition=g100_all_serial
#SBATCH --account=tra24_sepolimi
#SBATCH --output=result.txt
#SBATCH --error=error.txt
#SBATCH --time=00:10:00
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=2
#SBATCH --cpus-per-task=1

# Run the containerized application
echo "Job started!"
singularity run -C my_container.sif
