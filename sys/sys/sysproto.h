/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * created from	Id: syscalls.master,v 1.46 1998/01/24 02:54:35 eivind Exp 
 */

#ifndef _SYS_SYSPROTO_H_
#define	_SYS_SYSPROTO_H_

#include <sys/signal.h>

struct	nosys_args {
	int dummy;
};
struct	rexit_args {
	int rval;
};
struct	fork_args {
	int dummy;
};
struct	read_args {
	int fd;
	char * buf;
	u_int nbyte;
};
struct	write_args {
	int fd;
	char * buf;
	u_int nbyte;
};
struct	open_args {
	char * path;
	int flags;
	int mode;
};
struct	close_args {
	int fd;
};
struct	wait_args {
	int pid;
	int * status;
	int options;
	struct rusage * rusage;
};
struct	link_args {
	char * path;
	char * link;
};
struct	unlink_args {
	char * path;
};
struct	chdir_args {
	char * path;
};
struct	fchdir_args {
	int fd;
};
struct	mknod_args {
	char * path;
	int mode;
	int dev;
};
struct	chmod_args {
	char * path;
	int mode;
};
struct	chown_args {
	char * path;
	int uid;
	int gid;
};
struct	obreak_args {
	char * nsize;
};
struct	getfsstat_args {
	struct statfs * buf;
	long bufsize;
	int flags;
};
struct	getpid_args {
	int dummy;
};
struct	mount_args {
	char * type;
	char * path;
	int flags;
	caddr_t data;
};
struct	unmount_args {
	char * path;
	int flags;
};
struct	setuid_args {
	uid_t uid;
};
struct	getuid_args {
	int dummy;
};
struct	geteuid_args {
	int dummy;
};
struct	ptrace_args {
	int req;
	pid_t pid;
	caddr_t addr;
	int data;
};
struct	recvmsg_args {
	int s;
	struct msghdr * msg;
	int flags;
};
struct	sendmsg_args {
	int s;
	caddr_t msg;
	int flags;
};
struct	recvfrom_args {
	int s;
	caddr_t buf;
	size_t len;
	int flags;
	caddr_t from;
	int * fromlenaddr;
};
struct	accept_args {
	int s;
	caddr_t name;
	int * anamelen;
};
struct	getpeername_args {
	int fdes;
	caddr_t asa;
	int * alen;
};
struct	getsockname_args {
	int fdes;
	caddr_t asa;
	int * alen;
};
struct	access_args {
	char * path;
	int flags;
};
struct	chflags_args {
	char * path;
	int flags;
};
struct	fchflags_args {
	int fd;
	int flags;
};
struct	sync_args {
	int dummy;
};
struct	kill_args {
	int pid;
	int signum;
};
struct	getppid_args {
	int dummy;
};
struct	dup_args {
	u_int fd;
};
struct	pipe_args {
	int dummy;
};
struct	getegid_args {
	int dummy;
};
struct	profil_args {
	caddr_t samples;
	u_int size;
	u_int offset;
	u_int scale;
};
struct	ktrace_args {
	char * fname;
	int ops;
	int facs;
	int pid;
};
struct	sigaction_args {
	int signum;
	struct sigaction * nsa;
	struct sigaction * osa;
};
struct	getgid_args {
	int dummy;
};
struct	sigprocmask_args {
	int how;
	sigset_t mask;
};
struct	getlogin_args {
	char * namebuf;
	u_int namelen;
};
struct	setlogin_args {
	char * namebuf;
};
struct	acct_args {
	char * path;
};
struct	sigpending_args {
	int dummy;
};
struct	sigaltstack_args {
	struct sigaltstack * nss;
	struct sigaltstack * oss;
};
struct	ioctl_args {
	int fd;
	u_long com;
	caddr_t data;
};
struct	reboot_args {
	int opt;
};
struct	revoke_args {
	char * path;
};
struct	symlink_args {
	char * path;
	char * link;
};
struct	readlink_args {
	char * path;
	char * buf;
	int count;
};
struct	execve_args {
	char * fname;
	char ** argv;
	char ** envv;
};
struct	umask_args {
	int newmask;
};
struct	chroot_args {
	char * path;
};
struct	getpagesize_args {
	int dummy;
};
struct	msync_args {
	void * addr;
	size_t len;
	int flags;
};
struct	vfork_args {
	int dummy;
};
struct	sbrk_args {
	int incr;
};
struct	sstk_args {
	int incr;
};
struct	ovadvise_args {
	int anom;
};
struct	munmap_args {
	void * addr;
	size_t len;
};
struct	mprotect_args {
	const void * addr;
	size_t len;
	int prot;
};
struct	madvise_args {
	void * addr;
	size_t len;
	int behav;
};
struct	mincore_args {
	caddr_t addr;
	size_t len;
	char * vec;
};
struct	getgroups_args {
	u_int gidsetsize;
	gid_t * gidset;
};
struct	setgroups_args {
	u_int gidsetsize;
	gid_t * gidset;
};
struct	getpgrp_args {
	int dummy;
};
struct	setpgid_args {
	int pid;
	int pgid;
};
struct	setitimer_args {
	u_int which;
	struct itimerval * itv;
	struct itimerval * oitv;
};
struct	owait_args {
	int dummy;
};
struct	swapon_args {
	char * name;
};
struct	getitimer_args {
	u_int which;
	struct itimerval * itv;
};
struct	getdtablesize_args {
	int dummy;
};
struct	dup2_args {
	u_int from;
	u_int to;
};
struct	fcntl_args {
	int fd;
	int cmd;
	int arg;
};
struct	select_args {
	int nd;
	fd_set * in;
	fd_set * ou;
	fd_set * ex;
	struct timeval * tv;
};
struct	fsync_args {
	int fd;
};
struct	setpriority_args {
	int which;
	int who;
	int prio;
};
struct	socket_args {
	int domain;
	int type;
	int protocol;
};
struct	connect_args {
	int s;
	caddr_t name;
	int namelen;
};
struct	getpriority_args {
	int which;
	int who;
};
struct	sigreturn_args {
	struct sigcontext * sigcntxp;
};
struct	bind_args {
	int s;
	caddr_t name;
	int namelen;
};
struct	setsockopt_args {
	int s;
	int level;
	int name;
	caddr_t val;
	int valsize;
};
struct	listen_args {
	int s;
	int backlog;
};
struct	sigsuspend_args {
	sigset_t mask;
};
struct	gettimeofday_args {
	struct timeval * tp;
	struct timezone * tzp;
};
struct	getrusage_args {
	int who;
	struct rusage * rusage;
};
struct	getsockopt_args {
	int s;
	int level;
	int name;
	caddr_t val;
	int * avalsize;
};
struct	readv_args {
	int fd;
	struct iovec * iovp;
	u_int iovcnt;
};
struct	writev_args {
	int fd;
	struct iovec * iovp;
	u_int iovcnt;
};
struct	settimeofday_args {
	struct timeval * tv;
	struct timezone * tzp;
};
struct	fchown_args {
	int fd;
	int uid;
	int gid;
};
struct	fchmod_args {
	int fd;
	int mode;
};
struct	setreuid_args {
	int ruid;
	int euid;
};
struct	setregid_args {
	int rgid;
	int egid;
};
struct	rename_args {
	char * from;
	char * to;
};
struct	flock_args {
	int fd;
	int how;
};
struct	mkfifo_args {
	char * path;
	int mode;
};
struct	sendto_args {
	int s;
	caddr_t buf;
	size_t len;
	int flags;
	caddr_t to;
	int tolen;
};
struct	shutdown_args {
	int s;
	int how;
};
struct	socketpair_args {
	int domain;
	int type;
	int protocol;
	int * rsv;
};
struct	mkdir_args {
	char * path;
	int mode;
};
struct	rmdir_args {
	char * path;
};
struct	utimes_args {
	char * path;
	struct timeval * tptr;
};
struct	adjtime_args {
	struct timeval * delta;
	struct timeval * olddelta;
};
struct	ogethostid_args {
	int dummy;
};
struct	setsid_args {
	int dummy;
};
struct	quotactl_args {
	char * path;
	int cmd;
	int uid;
	caddr_t arg;
};
struct	oquota_args {
	int dummy;
};
struct	nfssvc_args {
	int flag;
	caddr_t argp;
};
struct	statfs_args {
	char * path;
	struct statfs * buf;
};
struct	fstatfs_args {
	int fd;
	struct statfs * buf;
};
struct	getfh_args {
	char * fname;
	struct fhandle * fhp;
};
struct	getdomainname_args {
	char * domainname;
	int len;
};
struct	setdomainname_args {
	char * domainname;
	int len;
};
struct	uname_args {
	struct utsname * name;
};
struct	sysarch_args {
	int op;
	char * parms;
};
struct	rtprio_args {
	int function;
	pid_t pid;
	struct rtprio * rtp;
};
struct	semsys_args {
	int which;
	int a2;
	int a3;
	int a4;
	int a5;
};
struct	msgsys_args {
	int which;
	int a2;
	int a3;
	int a4;
	int a5;
	int a6;
};
struct	shmsys_args {
	int which;
	int a2;
	int a3;
	int a4;
};
struct	ntp_adjtime_args {
	struct timex * tp;
};
struct	setgid_args {
	gid_t gid;
};
struct	setegid_args {
	gid_t egid;
};
struct	seteuid_args {
	uid_t euid;
};
struct	stat_args {
	char * path;
	struct stat * ub;
};
struct	fstat_args {
	int fd;
	struct stat * sb;
};
struct	lstat_args {
	char * path;
	struct stat * ub;
};
struct	pathconf_args {
	char * path;
	int name;
};
struct	fpathconf_args {
	int fd;
	int name;
};
struct	__getrlimit_args {
	u_int which;
	struct orlimit * rlp;
};
struct	__setrlimit_args {
	u_int which;
	struct orlimit * rlp;
};
struct	getdirentries_args {
	int fd;
	char * buf;
	u_int count;
	long * basep;
};
struct	mmap_args {
	caddr_t addr;
	size_t len;
	int prot;
	int flags;
	int fd;
	long pad;
	off_t pos;
};
struct	lseek_args {
	int fd;
	int pad;
	off_t offset;
	int whence;
};
struct	truncate_args {
	char * path;
	int pad;
	off_t length;
};
struct	ftruncate_args {
	int fd;
	int pad;
	off_t length;
};
struct	sysctl_args {
	int * name;
	u_int namelen;
	void * old;
	size_t * oldlenp;
	void * new;
	size_t newlen;
};
struct	mlock_args {
	const void * addr;
	size_t len;
};
struct	munlock_args {
	const void * addr;
	size_t len;
};
struct	utrace_args {
	caddr_t addr;
	size_t len;
};
struct	undelete_args {
	char * path;
};
struct	getpgid_args {
	pid_t pid;
};
struct	poll_args {
	struct pollfd * fds;
	u_int nfds;
	int timeout;
};
struct	__semctl_args {
	int semid;
	int semnum;
	int cmd;
	union semun * arg;
};
struct	semget_args {
	key_t key;
	int nsems;
	int semflg;
};
struct	semop_args {
	int semid;
	struct sembuf * sops;
	u_int nsops;
};
struct	semconfig_args {
	int flag;
};
struct	msgctl_args {
	int msqid;
	int cmd;
	struct msqid_ds * buf;
};
struct	msgget_args {
	key_t key;
	int msgflg;
};
struct	msgsnd_args {
	int msqid;
	void * msgp;
	size_t msgsz;
	int msgflg;
};
struct	msgrcv_args {
	int msqid;
	void * msgp;
	size_t msgsz;
	long msgtyp;
	int msgflg;
};
struct	shmat_args {
	int shmid;
	void * shmaddr;
	int shmflg;
};
struct	shmctl_args {
	int shmid;
	int cmd;
	struct shmid_ds * buf;
};
struct	shmdt_args {
	void * shmaddr;
};
struct	shmget_args {
	key_t key;
	int size;
	int shmflg;
};
struct	clock_gettime_args {
	clockid_t clock_id;
	struct timespec * tp;
};
struct	clock_settime_args {
	clockid_t clock_id;
	const struct timespec * tp;
};
struct	clock_getres_args {
	clockid_t clock_id;
	struct timespec * tp;
};
struct	nanosleep_args {
	const struct timespec * rqtp;
	struct timespec * rmtp;
};
struct	minherit_args {
	void * addr;
	size_t len;
	int inherit;
};
struct	rfork_args {
	int flags;
};
struct	openbsd_poll_args {
	struct pollfd * fds;
	u_int nfds;
	int timeout;
};
struct	issetugid_args {
	int dummy;
};
struct	lchown_args {
	char * path;
	int uid;
	int gid;
};
struct	modnext_args {
	int modid;
};
struct	modstat_args {
	int modid;
	struct module_stat * stat;
};
struct	modfnext_args {
	int modid;
};
struct	modfind_args {
	char * name;
};
struct	kldload_args {
	const char * file;
};
struct	kldunload_args {
	int fileid;
};
struct	kldfind_args {
	const char * file;
};
struct	kldnext_args {
	int fileid;
};
struct	kldstat_args {
	int fileid;
	struct kld_file_stat * stat;
};
struct	kldfirstmod_args {
	int fileid;
};
struct	getsid_args {
	pid_t pid;
};
struct	signanosleep_args {
	const struct timespec * rqtp;
	struct timespec * rmtp;
	sigset_t * mask;
};
struct	aio_return_args {
	struct aiocb * aiocbp;
};
struct	aio_suspend_args {
	struct aiocb *const * aiocbp;
	int nent;
	const struct timespec * timeout;
};
struct	aio_cancel_args {
	int fd;
	struct aiocb * aiocbp;
};
struct	aio_error_args {
	struct aiocb * aiocbp;
};
struct	aio_read_args {
	struct aiocb * aiocbp;
};
struct	aio_write_args {
	struct aiocb * aiocbp;
};
struct	lio_listio_args {
	int mode;
	struct aiocb *const * acb_list;
	int nent;
	struct sigevent * sig;
};
struct	yield_args {
	int dummy;
};
struct	thr_sleep_args {
	const struct timespec * timeout;
};
struct	thr_wakeup_args {
	pid_t pid;
};
struct	mlockall_args {
	int how;
};
struct	munlockall_args {
	int dummy;
};
struct	__getcwd_args {
	u_char * buf;
	u_int buflen;
};
int	nosys __P((struct proc *, struct nosys_args *));
void	exit __P((struct proc *, struct rexit_args *)) __dead2;
int	fork __P((struct proc *, struct fork_args *));
int	read __P((struct proc *, struct read_args *));
int	write __P((struct proc *, struct write_args *));
int	open __P((struct proc *, struct open_args *));
int	close __P((struct proc *, struct close_args *));
int	wait4 __P((struct proc *, struct wait_args *));
int	link __P((struct proc *, struct link_args *));
int	unlink __P((struct proc *, struct unlink_args *));
int	chdir __P((struct proc *, struct chdir_args *));
int	fchdir __P((struct proc *, struct fchdir_args *));
int	mknod __P((struct proc *, struct mknod_args *));
int	chmod __P((struct proc *, struct chmod_args *));
int	chown __P((struct proc *, struct chown_args *));
int	obreak __P((struct proc *, struct obreak_args *));
int	getfsstat __P((struct proc *, struct getfsstat_args *));
int	getpid __P((struct proc *, struct getpid_args *));
int	mount __P((struct proc *, struct mount_args *));
int	unmount __P((struct proc *, struct unmount_args *));
int	setuid __P((struct proc *, struct setuid_args *));
int	getuid __P((struct proc *, struct getuid_args *));
int	geteuid __P((struct proc *, struct geteuid_args *));
int	ptrace __P((struct proc *, struct ptrace_args *));
int	recvmsg __P((struct proc *, struct recvmsg_args *));
int	sendmsg __P((struct proc *, struct sendmsg_args *));
int	recvfrom __P((struct proc *, struct recvfrom_args *));
int	accept __P((struct proc *, struct accept_args *));
int	getpeername __P((struct proc *, struct getpeername_args *));
int	getsockname __P((struct proc *, struct getsockname_args *));
int	access __P((struct proc *, struct access_args *));
int	chflags __P((struct proc *, struct chflags_args *));
int	fchflags __P((struct proc *, struct fchflags_args *));
int	sync __P((struct proc *, struct sync_args *));
int	kill __P((struct proc *, struct kill_args *));
int	getppid __P((struct proc *, struct getppid_args *));
int	dup __P((struct proc *, struct dup_args *));
int	pipe __P((struct proc *, struct pipe_args *));
int	getegid __P((struct proc *, struct getegid_args *));
int	profil __P((struct proc *, struct profil_args *));
int	ktrace __P((struct proc *, struct ktrace_args *));
int	sigaction __P((struct proc *, struct sigaction_args *));
int	getgid __P((struct proc *, struct getgid_args *));
int	sigprocmask __P((struct proc *, struct sigprocmask_args *));
int	getlogin __P((struct proc *, struct getlogin_args *));
int	setlogin __P((struct proc *, struct setlogin_args *));
int	acct __P((struct proc *, struct acct_args *));
int	sigpending __P((struct proc *, struct sigpending_args *));
int	sigaltstack __P((struct proc *, struct sigaltstack_args *));
int	ioctl __P((struct proc *, struct ioctl_args *));
int	reboot __P((struct proc *, struct reboot_args *));
int	revoke __P((struct proc *, struct revoke_args *));
int	symlink __P((struct proc *, struct symlink_args *));
int	readlink __P((struct proc *, struct readlink_args *));
int	execve __P((struct proc *, struct execve_args *));
int	umask __P((struct proc *, struct umask_args *));
int	chroot __P((struct proc *, struct chroot_args *));
int	msync __P((struct proc *, struct msync_args *));
int	vfork __P((struct proc *, struct vfork_args *));
int	sbrk __P((struct proc *, struct sbrk_args *));
int	sstk __P((struct proc *, struct sstk_args *));
int	ovadvise __P((struct proc *, struct ovadvise_args *));
int	munmap __P((struct proc *, struct munmap_args *));
int	mprotect __P((struct proc *, struct mprotect_args *));
int	madvise __P((struct proc *, struct madvise_args *));
int	mincore __P((struct proc *, struct mincore_args *));
int	getgroups __P((struct proc *, struct getgroups_args *));
int	setgroups __P((struct proc *, struct setgroups_args *));
int	getpgrp __P((struct proc *, struct getpgrp_args *));
int	setpgid __P((struct proc *, struct setpgid_args *));
int	setitimer __P((struct proc *, struct setitimer_args *));
int	swapon __P((struct proc *, struct swapon_args *));
int	getitimer __P((struct proc *, struct getitimer_args *));
int	getdtablesize __P((struct proc *, struct getdtablesize_args *));
int	dup2 __P((struct proc *, struct dup2_args *));
int	fcntl __P((struct proc *, struct fcntl_args *));
int	select __P((struct proc *, struct select_args *));
int	fsync __P((struct proc *, struct fsync_args *));
int	setpriority __P((struct proc *, struct setpriority_args *));
int	socket __P((struct proc *, struct socket_args *));
int	connect __P((struct proc *, struct connect_args *));
int	getpriority __P((struct proc *, struct getpriority_args *));
int	sigreturn __P((struct proc *, struct sigreturn_args *));
int	bind __P((struct proc *, struct bind_args *));
int	setsockopt __P((struct proc *, struct setsockopt_args *));
int	listen __P((struct proc *, struct listen_args *));
int	sigsuspend __P((struct proc *, struct sigsuspend_args *));
int	gettimeofday __P((struct proc *, struct gettimeofday_args *));
int	getrusage __P((struct proc *, struct getrusage_args *));
int	getsockopt __P((struct proc *, struct getsockopt_args *));
int	readv __P((struct proc *, struct readv_args *));
int	writev __P((struct proc *, struct writev_args *));
int	settimeofday __P((struct proc *, struct settimeofday_args *));
int	fchown __P((struct proc *, struct fchown_args *));
int	fchmod __P((struct proc *, struct fchmod_args *));
int	setreuid __P((struct proc *, struct setreuid_args *));
int	setregid __P((struct proc *, struct setregid_args *));
int	rename __P((struct proc *, struct rename_args *));
int	flock __P((struct proc *, struct flock_args *));
int	mkfifo __P((struct proc *, struct mkfifo_args *));
int	sendto __P((struct proc *, struct sendto_args *));
int	shutdown __P((struct proc *, struct shutdown_args *));
int	socketpair __P((struct proc *, struct socketpair_args *));
int	mkdir __P((struct proc *, struct mkdir_args *));
int	rmdir __P((struct proc *, struct rmdir_args *));
int	utimes __P((struct proc *, struct utimes_args *));
int	adjtime __P((struct proc *, struct adjtime_args *));
int	setsid __P((struct proc *, struct setsid_args *));
int	quotactl __P((struct proc *, struct quotactl_args *));
int	nfssvc __P((struct proc *, struct nfssvc_args *));
int	statfs __P((struct proc *, struct statfs_args *));
int	fstatfs __P((struct proc *, struct fstatfs_args *));
int	getfh __P((struct proc *, struct getfh_args *));
int	getdomainname __P((struct proc *, struct getdomainname_args *));
int	setdomainname __P((struct proc *, struct setdomainname_args *));
int	uname __P((struct proc *, struct uname_args *));
int	sysarch __P((struct proc *, struct sysarch_args *));
int	rtprio __P((struct proc *, struct rtprio_args *));
int	semsys __P((struct proc *, struct semsys_args *));
int	msgsys __P((struct proc *, struct msgsys_args *));
int	shmsys __P((struct proc *, struct shmsys_args *));
int	ntp_adjtime __P((struct proc *, struct ntp_adjtime_args *));
int	setgid __P((struct proc *, struct setgid_args *));
int	setegid __P((struct proc *, struct setegid_args *));
int	seteuid __P((struct proc *, struct seteuid_args *));
int	stat __P((struct proc *, struct stat_args *));
int	fstat __P((struct proc *, struct fstat_args *));
int	lstat __P((struct proc *, struct lstat_args *));
int	pathconf __P((struct proc *, struct pathconf_args *));
int	fpathconf __P((struct proc *, struct fpathconf_args *));
int	getrlimit __P((struct proc *, struct __getrlimit_args *));
int	setrlimit __P((struct proc *, struct __setrlimit_args *));
int	getdirentries __P((struct proc *, struct getdirentries_args *));
int	mmap __P((struct proc *, struct mmap_args *));
int	lseek __P((struct proc *, struct lseek_args *));
int	truncate __P((struct proc *, struct truncate_args *));
int	ftruncate __P((struct proc *, struct ftruncate_args *));
int	__sysctl __P((struct proc *, struct sysctl_args *));
int	mlock __P((struct proc *, struct mlock_args *));
int	munlock __P((struct proc *, struct munlock_args *));
int	utrace __P((struct proc *, struct utrace_args *));
int	undelete __P((struct proc *, struct undelete_args *));
int	getpgid __P((struct proc *, struct getpgid_args *));
int	poll __P((struct proc *, struct poll_args *));
int	lkmnosys __P((struct proc *, struct nosys_args *));
int	__semctl __P((struct proc *, struct __semctl_args *));
int	semget __P((struct proc *, struct semget_args *));
int	semop __P((struct proc *, struct semop_args *));
int	semconfig __P((struct proc *, struct semconfig_args *));
int	msgctl __P((struct proc *, struct msgctl_args *));
int	msgget __P((struct proc *, struct msgget_args *));
int	msgsnd __P((struct proc *, struct msgsnd_args *));
int	msgrcv __P((struct proc *, struct msgrcv_args *));
int	shmat __P((struct proc *, struct shmat_args *));
int	shmctl __P((struct proc *, struct shmctl_args *));
int	shmdt __P((struct proc *, struct shmdt_args *));
int	shmget __P((struct proc *, struct shmget_args *));
int	clock_gettime __P((struct proc *, struct clock_gettime_args *));
int	clock_settime __P((struct proc *, struct clock_settime_args *));
int	clock_getres __P((struct proc *, struct clock_getres_args *));
int	nanosleep __P((struct proc *, struct nanosleep_args *));
int	minherit __P((struct proc *, struct minherit_args *));
int	rfork __P((struct proc *, struct rfork_args *));
int	openbsd_poll __P((struct proc *, struct openbsd_poll_args *));
int	issetugid __P((struct proc *, struct issetugid_args *));
int	lchown __P((struct proc *, struct lchown_args *));
int	modnext __P((struct proc *, struct modnext_args *));
int	modstat __P((struct proc *, struct modstat_args *));
int	modfnext __P((struct proc *, struct modfnext_args *));
int	modfind __P((struct proc *, struct modfind_args *));
int	kldload __P((struct proc *, struct kldload_args *));
int	kldunload __P((struct proc *, struct kldunload_args *));
int	kldfind __P((struct proc *, struct kldfind_args *));
int	kldnext __P((struct proc *, struct kldnext_args *));
int	kldstat __P((struct proc *, struct kldstat_args *));
int	kldfirstmod __P((struct proc *, struct kldfirstmod_args *));
int	getsid __P((struct proc *, struct getsid_args *));
int	signanosleep __P((struct proc *, struct signanosleep_args *));
int	aio_return __P((struct proc *, struct aio_return_args *));
int	aio_suspend __P((struct proc *, struct aio_suspend_args *));
int	aio_cancel __P((struct proc *, struct aio_cancel_args *));
int	aio_error __P((struct proc *, struct aio_error_args *));
int	aio_read __P((struct proc *, struct aio_read_args *));
int	aio_write __P((struct proc *, struct aio_write_args *));
int	lio_listio __P((struct proc *, struct lio_listio_args *));
int	yield __P((struct proc *, struct yield_args *));
int	thr_sleep __P((struct proc *, struct thr_sleep_args *));
int	thr_wakeup __P((struct proc *, struct thr_wakeup_args *));
int	mlockall __P((struct proc *, struct mlockall_args *));
int	munlockall __P((struct proc *, struct munlockall_args *));
int	__getcwd __P((struct proc *, struct __getcwd_args *));

#ifdef COMPAT_43

struct	ocreat_args {
	char * path;
	int mode;
};
struct	olseek_args {
	int fd;
	long offset;
	int whence;
};
struct	ostat_args {
	char * path;
	struct ostat * ub;
};
struct	olstat_args {
	char * path;
	struct ostat * ub;
};
struct	ofstat_args {
	int fd;
	struct ostat * sb;
};
struct	getkerninfo_args {
	int op;
	char * where;
	int * size;
	int arg;
};
struct	ommap_args {
	void * addr;
	int len;
	int prot;
	int flags;
	int fd;
	long pos;
};
struct	gethostname_args {
	char * hostname;
	u_int len;
};
struct	sethostname_args {
	char * hostname;
	u_int len;
};
struct	osend_args {
	int s;
	caddr_t buf;
	int len;
	int flags;
};
struct	orecv_args {
	int s;
	caddr_t buf;
	int len;
	int flags;
};
struct	osigvec_args {
	int signum;
	struct sigvec * nsv;
	struct sigvec * osv;
};
struct	osigblock_args {
	int mask;
};
struct	osigsetmask_args {
	int mask;
};
struct	osigstack_args {
	struct sigstack * nss;
	struct sigstack * oss;
};
struct	orecvmsg_args {
	int s;
	struct omsghdr * msg;
	int flags;
};
struct	osendmsg_args {
	int s;
	caddr_t msg;
	int flags;
};
struct	otruncate_args {
	char * path;
	long length;
};
struct	oftruncate_args {
	int fd;
	long length;
};
struct	ogetpeername_args {
	int fdes;
	caddr_t asa;
	int * alen;
};
struct	osethostid_args {
	long hostid;
};
struct	ogetrlimit_args {
	u_int which;
	struct ogetrlimit * rlp;
};
struct	osetrlimit_args {
	u_int which;
	struct ogetrlimit * rlp;
};
struct	okillpg_args {
	int pgid;
	int signum;
};
struct	ogetdirentries_args {
	int fd;
	char * buf;
	u_int count;
	long * basep;
};
int	ocreat __P((struct proc *, struct ocreat_args *));
int	olseek __P((struct proc *, struct olseek_args *));
int	ostat __P((struct proc *, struct ostat_args *));
int	olstat __P((struct proc *, struct olstat_args *));
int	ofstat __P((struct proc *, struct ofstat_args *));
int	ogetkerninfo __P((struct proc *, struct getkerninfo_args *));
int	ogetpagesize __P((struct proc *, struct getpagesize_args *));
int	ommap __P((struct proc *, struct ommap_args *));
int	owait __P((struct proc *, struct owait_args *));
int	ogethostname __P((struct proc *, struct gethostname_args *));
int	osethostname __P((struct proc *, struct sethostname_args *));
int	oaccept __P((struct proc *, struct accept_args *));
int	osend __P((struct proc *, struct osend_args *));
int	orecv __P((struct proc *, struct orecv_args *));
int	osigvec __P((struct proc *, struct osigvec_args *));
int	osigblock __P((struct proc *, struct osigblock_args *));
int	osigsetmask __P((struct proc *, struct osigsetmask_args *));
int	osigstack __P((struct proc *, struct osigstack_args *));
int	orecvmsg __P((struct proc *, struct orecvmsg_args *));
int	osendmsg __P((struct proc *, struct osendmsg_args *));
int	orecvfrom __P((struct proc *, struct recvfrom_args *));
int	otruncate __P((struct proc *, struct otruncate_args *));
int	oftruncate __P((struct proc *, struct oftruncate_args *));
int	ogetpeername __P((struct proc *, struct ogetpeername_args *));
int	ogethostid __P((struct proc *, struct ogethostid_args *));
int	osethostid __P((struct proc *, struct osethostid_args *));
int	ogetrlimit __P((struct proc *, struct ogetrlimit_args *));
int	osetrlimit __P((struct proc *, struct osetrlimit_args *));
int	okillpg __P((struct proc *, struct okillpg_args *));
int	oquota __P((struct proc *, struct oquota_args *));
int	ogetsockname __P((struct proc *, struct getsockname_args *));
int	ogetdirentries __P((struct proc *, struct ogetdirentries_args *));

#endif /* COMPAT_43 */

#endif /* !_SYS_SYSPROTO_H_ */
