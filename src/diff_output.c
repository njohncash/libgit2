#include "filter.h"
	if (git_attr_get(repo, 0, file->path, "diff", &value) < 0)
	git_buf search;
	git_text_stats stats;

		search.ptr  = old_data->data;
		search.size = min(old_data->len, 4000);

		git_text_gather_stats(&stats, &search);

		if (git_text_is_binary(&stats))
		search.ptr  = new_data->data;
		search.size = min(new_data->len, 4000);

		git_text_gather_stats(&stats, &search);

		if (git_text_is_binary(&stats))
		mmfile_t old_xdiff_data, new_xdiff_data;



		old_xdiff_data.ptr = old_data.data;
		old_xdiff_data.size = old_data.len;
		new_xdiff_data.ptr = new_data.data;
		new_xdiff_data.size = new_data.len;
		xdl_diff(&old_xdiff_data, &new_xdiff_data,
	git_oid_tostr(start_oid, sizeof(start_oid), &delta->old_file.oid);
	git_oid_tostr(end_oid, sizeof(end_oid), &delta->new_file.oid);