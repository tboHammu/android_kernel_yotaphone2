#ifndef _NAMESPACE_H_
#define _NAMESPACE_H_
#ifdef __KERNEL__

struct mnt_namespace;
struct fs_struct;
<<<<<<< HEAD

extern struct mnt_namespace *copy_mnt_ns(unsigned long, struct mnt_namespace *,
		struct fs_struct *);
=======
struct user_namespace;

extern struct mnt_namespace *copy_mnt_ns(unsigned long, struct mnt_namespace *,
		 struct user_namespace *, struct fs_struct *);
>>>>>>> caf/LA.BF.1.1.3_rb1.13
extern void put_mnt_ns(struct mnt_namespace *ns);

extern const struct file_operations proc_mounts_operations;
extern const struct file_operations proc_mountinfo_operations;
extern const struct file_operations proc_mountstats_operations;

#endif
#endif
