#include<stdio.h>
#include<time.h>
#include<sys/stat.h>
void main(int argc,char *argv[])
{
	int i;
	struct stat sfile;
	if(argc>=2)
	{
		for(i=1;i<argc;i++)
		{
			stat(argv[i], &sfile);
			printf("Size %ld \t",sfile.st_size);
			printf("Blocks: %ld \t",sfile.st_blocks);
			printf("IO Block: %ld \n",sfile.st_blksize);
			printf("Inode: %ld \t",sfile.st_ino);
			printf("Device: %lxh/%ldd \t",sfile.st_dev,sfile.st_rdev);
			printf("Links: %u \t",(unsigned int)sfile.st_nlink);
			printf("Access: ");
			printf("Mode: (%o/",sfile.st_mode);
			//User
			printf((sfile.st_mode & S_IRUSR)? "r":"-");
			printf((sfile.st_mode & S_IWUSR)? "w":"-");
			printf((sfile.st_mode & S_IXUSR)? "x":"-");
			//Group
			printf((sfile.st_mode & S_IRGRP)? "r":"-");
			printf((sfile.st_mode & S_IWGRP)? "w":"-");
			printf((sfile.st_mode & S_IXGRP)? "x":"-");
			//Other
			printf((sfile.st_mode & S_IROTH)? "r":"-");
			printf((sfile.st_mode & S_IWOTH)? "w":"-");
			printf((sfile.st_mode & S_IXOTH)? "x":"-");
			printf(")\n");
			printf("Uid: %d \t",sfile.st_uid);
			printf("Gid: %d \n",sfile.st_gid);
			//in seconds
			printf("Access time: %ld\n", sfile.st_atime);
			printf("Modify time: %ld\n",sfile.st_mtime);
			printf("Change time: %ld\n",sfile.st_mtime);
			//in date,HH:MM:SEC
			printf("Access time: %s",ctime(&sfile.st_atime));
			printf("Modify time: %s",ctime(&sfile.st_mtime));
			printf("Change time: %s",ctime(&sfile.st_mtime));
		}

	}
}
