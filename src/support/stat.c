/* DO NOT EDIT: automatically built by dist/stat.py. */

#include "wt_internal.h"

int
__wt_stat_alloc_cache_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 10, sizeof(WT_STATS), &stats));

	stats[WT_STAT_CACHE_BYTES_INUSE].desc =
	    "cache: bytes currently held in the cache";
	stats[WT_STAT_CACHE_BYTES_MAX].desc =
	    "cache: maximum bytes configured";
	stats[WT_STAT_CACHE_EVICT_HAZARD].desc =
	    "cache: pages selected for eviction not evicted because of a hazard reference";
	stats[WT_STAT_CACHE_EVICT_MODIFIED].desc =
	    "cache: modified pages selected for eviction";
	stats[WT_STAT_CACHE_EVICT_UNMODIFIED].desc =
	    "cache: unmodified pages selected for eviction";
	stats[WT_STAT_CACHE_OVERFLOW_READ].desc =
	    "cache: overflow pages read from the file";
	stats[WT_STAT_CACHE_PAGES_INUSE].desc =
	    "cache: pages currently held in the cache";
	stats[WT_STAT_CACHE_PAGE_READ].desc = "cache: pages read from a file";
	stats[WT_STAT_CACHE_PAGE_WRITE].desc =
	    "cache: pages written to a file";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_cache_stats(WT_STATS *stats)
{
	stats[WT_STAT_CACHE_EVICT_HAZARD].v = 0;
	stats[WT_STAT_CACHE_EVICT_MODIFIED].v = 0;
	stats[WT_STAT_CACHE_EVICT_UNMODIFIED].v = 0;
	stats[WT_STAT_CACHE_OVERFLOW_READ].v = 0;
	stats[WT_STAT_CACHE_PAGE_READ].v = 0;
	stats[WT_STAT_CACHE_PAGE_WRITE].v = 0;
}

int
__wt_stat_alloc_file_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 28, sizeof(WT_STATS), &stats));

	stats[WT_STAT_BASE_RECNO].desc = "base record number";
	stats[WT_STAT_DUP_TREE].desc = "duplicate data off-page trees";
	stats[WT_STAT_FIXED_LEN].desc = "fixed-record size";
	stats[WT_STAT_FREELIST_ENTRIES].desc =
	    "number of entries in the freelist";
	stats[WT_STAT_INTLMAX].desc = "maximum internal page size";
	stats[WT_STAT_INTLMIN].desc = "minimum internal page size";
	stats[WT_STAT_ITEM_COL_DELETED].desc =
	    "column store deleted data items";
	stats[WT_STAT_ITEM_DATA_OVFL].desc = "total overflow data items";
	stats[WT_STAT_ITEM_DUP_DATA].desc = "total duplicate data items";
	stats[WT_STAT_ITEM_KEY_OVFL].desc = "total overflow keys";
	stats[WT_STAT_ITEM_TOTAL_DATA].desc = "total data items";
	stats[WT_STAT_ITEM_TOTAL_KEY].desc = "total keys";
	stats[WT_STAT_LEAFMAX].desc = "maximum leaf page size";
	stats[WT_STAT_LEAFMIN].desc = "minimum leaf page size";
	stats[WT_STAT_MAGIC].desc = "magic number";
	stats[WT_STAT_MAJOR].desc = "major version number";
	stats[WT_STAT_MINOR].desc = "minor version number";
	stats[WT_STAT_PAGE_COL_FIX].desc =
	    "column-store fixed-size leaf pages";
	stats[WT_STAT_PAGE_COL_INTERNAL].desc = "column-store internal pages";
	stats[WT_STAT_PAGE_COL_RLE].desc =
	    "column-store repeat-count compressed fixed-size leaf pages";
	stats[WT_STAT_PAGE_COL_VARIABLE].desc =
	    "column-store variable-size leaf pages";
	stats[WT_STAT_PAGE_DUP_INTERNAL].desc = "duplicate internal pages";
	stats[WT_STAT_PAGE_DUP_LEAF].desc = "duplicate leaf pages";
	stats[WT_STAT_PAGE_OVERFLOW].desc = "overflow pages";
	stats[WT_STAT_PAGE_ROW_INTERNAL].desc = "row-store internal pages";
	stats[WT_STAT_PAGE_ROW_LEAF].desc = "row-store leaf pages";
	stats[WT_STAT_TREE_LEVEL].desc = "number of levels in the btree";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_file_stats(WT_STATS *stats)
{
	stats[WT_STAT_BASE_RECNO].v = 0;
	stats[WT_STAT_DUP_TREE].v = 0;
	stats[WT_STAT_FIXED_LEN].v = 0;
	stats[WT_STAT_FREELIST_ENTRIES].v = 0;
	stats[WT_STAT_INTLMAX].v = 0;
	stats[WT_STAT_INTLMIN].v = 0;
	stats[WT_STAT_ITEM_COL_DELETED].v = 0;
	stats[WT_STAT_ITEM_DATA_OVFL].v = 0;
	stats[WT_STAT_ITEM_DUP_DATA].v = 0;
	stats[WT_STAT_ITEM_KEY_OVFL].v = 0;
	stats[WT_STAT_ITEM_TOTAL_DATA].v = 0;
	stats[WT_STAT_ITEM_TOTAL_KEY].v = 0;
	stats[WT_STAT_LEAFMAX].v = 0;
	stats[WT_STAT_LEAFMIN].v = 0;
	stats[WT_STAT_MAGIC].v = 0;
	stats[WT_STAT_MAJOR].v = 0;
	stats[WT_STAT_MINOR].v = 0;
	stats[WT_STAT_PAGE_COL_FIX].v = 0;
	stats[WT_STAT_PAGE_COL_INTERNAL].v = 0;
	stats[WT_STAT_PAGE_COL_RLE].v = 0;
	stats[WT_STAT_PAGE_COL_VARIABLE].v = 0;
	stats[WT_STAT_PAGE_DUP_INTERNAL].v = 0;
	stats[WT_STAT_PAGE_DUP_LEAF].v = 0;
	stats[WT_STAT_PAGE_OVERFLOW].v = 0;
	stats[WT_STAT_PAGE_ROW_INTERNAL].v = 0;
	stats[WT_STAT_PAGE_ROW_LEAF].v = 0;
	stats[WT_STAT_TREE_LEVEL].v = 0;
}

int
__wt_stat_alloc_db_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 13, sizeof(WT_STATS), &stats));

	stats[WT_STAT_FILE_ALLOC].desc = "file: block allocations";
	stats[WT_STAT_FILE_DUPLICATE_ITEMS_INSERTED].desc =
	    "file: duplicate key/data pairs inserted";
	stats[WT_STAT_FILE_EXTEND].desc =
	    "file: block allocations require file extension";
	stats[WT_STAT_FILE_FREE].desc = "file: block frees";
	stats[WT_STAT_FILE_HUFFMAN_DATA].desc =
	    "file: huffman data compression in bytes";
	stats[WT_STAT_FILE_HUFFMAN_KEY].desc =
	    "file: huffman key compression in bytes";
	stats[WT_STAT_FILE_ITEMS_INSERTED].desc =
	    "file: key/data pairs inserted";
	stats[WT_STAT_FILE_OVERFLOW_DATA].desc =
	    "file: overflow data items inserted";
	stats[WT_STAT_FILE_OVERFLOW_KEY].desc =
	    "file: overflow key items inserted";
	stats[WT_STAT_FILE_OVERFLOW_READ].desc =
	    "file: overflow pages read from the file";
	stats[WT_STAT_FILE_PAGE_READ].desc = "file: pages read from a file";
	stats[WT_STAT_FILE_PAGE_WRITE].desc = "file: pages written to a file";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_db_stats(WT_STATS *stats)
{
	stats[WT_STAT_FILE_ALLOC].v = 0;
	stats[WT_STAT_FILE_DUPLICATE_ITEMS_INSERTED].v = 0;
	stats[WT_STAT_FILE_EXTEND].v = 0;
	stats[WT_STAT_FILE_FREE].v = 0;
	stats[WT_STAT_FILE_HUFFMAN_DATA].v = 0;
	stats[WT_STAT_FILE_HUFFMAN_KEY].v = 0;
	stats[WT_STAT_FILE_ITEMS_INSERTED].v = 0;
	stats[WT_STAT_FILE_OVERFLOW_DATA].v = 0;
	stats[WT_STAT_FILE_OVERFLOW_KEY].v = 0;
	stats[WT_STAT_FILE_OVERFLOW_READ].v = 0;
	stats[WT_STAT_FILE_PAGE_READ].v = 0;
	stats[WT_STAT_FILE_PAGE_WRITE].v = 0;
}

int
__wt_stat_alloc_env_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 9, sizeof(WT_STATS), &stats));

	stats[WT_STAT_FILE_OPEN].desc = "file open";
	stats[WT_STAT_MEMALLOC].desc = "memory allocations";
	stats[WT_STAT_MEMFREE].desc = "memory frees";
	stats[WT_STAT_MTX_LOCK].desc = "mutex lock calls";
	stats[WT_STAT_TOTAL_READ_IO].desc = "total read I/Os";
	stats[WT_STAT_TOTAL_WRITE_IO].desc = "total write I/Os";
	stats[WT_STAT_WORKQ_PASSES].desc = "workQ queue passes";
	stats[WT_STAT_WORKQ_YIELD].desc = "workQ yields";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_env_stats(WT_STATS *stats)
{
	stats[WT_STAT_FILE_OPEN].v = 0;
	stats[WT_STAT_MEMALLOC].v = 0;
	stats[WT_STAT_MEMFREE].v = 0;
	stats[WT_STAT_MTX_LOCK].v = 0;
	stats[WT_STAT_TOTAL_READ_IO].v = 0;
	stats[WT_STAT_TOTAL_WRITE_IO].v = 0;
	stats[WT_STAT_WORKQ_PASSES].v = 0;
	stats[WT_STAT_WORKQ_YIELD].v = 0;
}

int
__wt_stat_alloc_fh_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 4, sizeof(WT_STATS), &stats));

	stats[WT_STAT_FSYNC].desc = "fsyncs";
	stats[WT_STAT_READ_IO].desc = "read I/Os";
	stats[WT_STAT_WRITE_IO].desc = "write I/Os";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_fh_stats(WT_STATS *stats)
{
	stats[WT_STAT_FSYNC].v = 0;
	stats[WT_STAT_READ_IO].v = 0;
	stats[WT_STAT_WRITE_IO].v = 0;
}

int
__wt_stat_alloc_method_stats(ENV *env, WT_STATS **statsp)
{
	WT_STATS *stats;

	WT_RET(__wt_calloc(env, 69, sizeof(WT_STATS), &stats));

	stats[WT_STAT_DB_BTREE_COMPARE_DUP_GET].desc =
	    "db.btree_compare_dup_get";
	stats[WT_STAT_DB_BTREE_COMPARE_DUP_SET].desc =
	    "db.btree_compare_dup_set";
	stats[WT_STAT_DB_BTREE_COMPARE_GET].desc = "db.btree_compare_get";
	stats[WT_STAT_DB_BTREE_COMPARE_INT_GET].desc =
	    "db.btree_compare_int_get";
	stats[WT_STAT_DB_BTREE_COMPARE_INT_SET].desc =
	    "db.btree_compare_int_set";
	stats[WT_STAT_DB_BTREE_COMPARE_SET].desc = "db.btree_compare_set";
	stats[WT_STAT_DB_BTREE_DUP_OFFPAGE_GET].desc =
	    "db.btree_dup_offpage_get";
	stats[WT_STAT_DB_BTREE_DUP_OFFPAGE_SET].desc =
	    "db.btree_dup_offpage_set";
	stats[WT_STAT_DB_BTREE_ITEMSIZE_GET].desc = "db.btree_itemsize_get";
	stats[WT_STAT_DB_BTREE_ITEMSIZE_SET].desc = "db.btree_itemsize_set";
	stats[WT_STAT_DB_BTREE_PAGESIZE_GET].desc = "db.btree_pagesize_get";
	stats[WT_STAT_DB_BTREE_PAGESIZE_SET].desc = "db.btree_pagesize_set";
	stats[WT_STAT_DB_BULK_LOAD].desc = "db.bulk_load";
	stats[WT_STAT_DB_CLOSE].desc = "db.close";
	stats[WT_STAT_DB_COLUMN_SET].desc = "db.column_set";
	stats[WT_STAT_DB_COL_DEL].desc = "db.col_del";
	stats[WT_STAT_DB_COL_DEL_RESTART].desc = "db.col_del method restarts";
	stats[WT_STAT_DB_COL_GET].desc = "db.col_get";
	stats[WT_STAT_DB_COL_PUT].desc = "db.col_put";
	stats[WT_STAT_DB_COL_PUT_RESTART].desc = "db.col_put method restarts";
	stats[WT_STAT_DB_DUMP].desc = "db.dump";
	stats[WT_STAT_DB_ERRCALL_GET].desc = "db.errcall_get";
	stats[WT_STAT_DB_ERRCALL_SET].desc = "db.errcall_set";
	stats[WT_STAT_DB_ERRFILE_GET].desc = "db.errfile_get";
	stats[WT_STAT_DB_ERRFILE_SET].desc = "db.errfile_set";
	stats[WT_STAT_DB_ERRPFX_GET].desc = "db.errpfx_get";
	stats[WT_STAT_DB_ERRPFX_SET].desc = "db.errpfx_set";
	stats[WT_STAT_DB_HUFFMAN_SET].desc = "db.huffman_set";
	stats[WT_STAT_DB_OPEN].desc = "db.open";
	stats[WT_STAT_DB_ROW_DEL].desc = "db.row_del";
	stats[WT_STAT_DB_ROW_DEL_RESTART].desc = "db.row_del method restarts";
	stats[WT_STAT_DB_ROW_GET].desc = "db.row_get";
	stats[WT_STAT_DB_ROW_PUT].desc = "db.row_put";
	stats[WT_STAT_DB_ROW_PUT_RESTART].desc = "db.row_put method restarts";
	stats[WT_STAT_DB_STAT_CLEAR].desc = "db.stat_clear";
	stats[WT_STAT_DB_STAT_PRINT].desc = "db.stat_print";
	stats[WT_STAT_DB_SYNC].desc = "db.sync";
	stats[WT_STAT_DB_VERIFY].desc = "db.verify";
	stats[WT_STAT_ENV_CACHE_SIZE_GET].desc = "env.cache_size_get";
	stats[WT_STAT_ENV_CACHE_SIZE_SET].desc = "env.cache_size_set";
	stats[WT_STAT_ENV_CLOSE].desc = "env.close";
	stats[WT_STAT_ENV_DATA_UPDATE_INITIAL_GET].desc =
	    "env.data_update_initial_get";
	stats[WT_STAT_ENV_DATA_UPDATE_INITIAL_SET].desc =
	    "env.data_update_initial_set";
	stats[WT_STAT_ENV_DATA_UPDATE_MAX_GET].desc =
	    "env.data_update_max_get";
	stats[WT_STAT_ENV_DATA_UPDATE_MAX_SET].desc =
	    "env.data_update_max_set";
	stats[WT_STAT_ENV_DB].desc = "env.db";
	stats[WT_STAT_ENV_ERRCALL_GET].desc = "env.errcall_get";
	stats[WT_STAT_ENV_ERRCALL_SET].desc = "env.errcall_set";
	stats[WT_STAT_ENV_ERRFILE_GET].desc = "env.errfile_get";
	stats[WT_STAT_ENV_ERRFILE_SET].desc = "env.errfile_set";
	stats[WT_STAT_ENV_ERRPFX_GET].desc = "env.errpfx_get";
	stats[WT_STAT_ENV_ERRPFX_SET].desc = "env.errpfx_set";
	stats[WT_STAT_ENV_HAZARD_SIZE_GET].desc = "env.hazard_size_get";
	stats[WT_STAT_ENV_HAZARD_SIZE_SET].desc = "env.hazard_size_set";
	stats[WT_STAT_ENV_MSGCALL_GET].desc = "env.msgcall_get";
	stats[WT_STAT_ENV_MSGCALL_SET].desc = "env.msgcall_set";
	stats[WT_STAT_ENV_MSGFILE_GET].desc = "env.msgfile_get";
	stats[WT_STAT_ENV_MSGFILE_SET].desc = "env.msgfile_set";
	stats[WT_STAT_ENV_OPEN].desc = "env.open";
	stats[WT_STAT_ENV_STAT_CLEAR].desc = "env.stat_clear";
	stats[WT_STAT_ENV_STAT_PRINT].desc = "env.stat_print";
	stats[WT_STAT_ENV_SYNC].desc = "env.sync";
	stats[WT_STAT_ENV_TOC].desc = "env.toc";
	stats[WT_STAT_ENV_TOC_SIZE_GET].desc = "env.toc_size_get";
	stats[WT_STAT_ENV_TOC_SIZE_SET].desc = "env.toc_size_set";
	stats[WT_STAT_ENV_VERBOSE_GET].desc = "env.verbose_get";
	stats[WT_STAT_ENV_VERBOSE_SET].desc = "env.verbose_set";
	stats[WT_STAT_WT_TOC_CLOSE].desc = "wt_toc.close";

	*statsp = stats;
	return (0);
}

void
__wt_stat_clear_method_stats(WT_STATS *stats)
{
	stats[WT_STAT_DB_BTREE_COMPARE_DUP_GET].v = 0;
	stats[WT_STAT_DB_BTREE_COMPARE_DUP_SET].v = 0;
	stats[WT_STAT_DB_BTREE_COMPARE_GET].v = 0;
	stats[WT_STAT_DB_BTREE_COMPARE_INT_GET].v = 0;
	stats[WT_STAT_DB_BTREE_COMPARE_INT_SET].v = 0;
	stats[WT_STAT_DB_BTREE_COMPARE_SET].v = 0;
	stats[WT_STAT_DB_BTREE_DUP_OFFPAGE_GET].v = 0;
	stats[WT_STAT_DB_BTREE_DUP_OFFPAGE_SET].v = 0;
	stats[WT_STAT_DB_BTREE_ITEMSIZE_GET].v = 0;
	stats[WT_STAT_DB_BTREE_ITEMSIZE_SET].v = 0;
	stats[WT_STAT_DB_BTREE_PAGESIZE_GET].v = 0;
	stats[WT_STAT_DB_BTREE_PAGESIZE_SET].v = 0;
	stats[WT_STAT_DB_BULK_LOAD].v = 0;
	stats[WT_STAT_DB_CLOSE].v = 0;
	stats[WT_STAT_DB_COLUMN_SET].v = 0;
	stats[WT_STAT_DB_COL_DEL].v = 0;
	stats[WT_STAT_DB_COL_DEL_RESTART].v = 0;
	stats[WT_STAT_DB_COL_GET].v = 0;
	stats[WT_STAT_DB_COL_PUT].v = 0;
	stats[WT_STAT_DB_COL_PUT_RESTART].v = 0;
	stats[WT_STAT_DB_DUMP].v = 0;
	stats[WT_STAT_DB_ERRCALL_GET].v = 0;
	stats[WT_STAT_DB_ERRCALL_SET].v = 0;
	stats[WT_STAT_DB_ERRFILE_GET].v = 0;
	stats[WT_STAT_DB_ERRFILE_SET].v = 0;
	stats[WT_STAT_DB_ERRPFX_GET].v = 0;
	stats[WT_STAT_DB_ERRPFX_SET].v = 0;
	stats[WT_STAT_DB_HUFFMAN_SET].v = 0;
	stats[WT_STAT_DB_OPEN].v = 0;
	stats[WT_STAT_DB_ROW_DEL].v = 0;
	stats[WT_STAT_DB_ROW_DEL_RESTART].v = 0;
	stats[WT_STAT_DB_ROW_GET].v = 0;
	stats[WT_STAT_DB_ROW_PUT].v = 0;
	stats[WT_STAT_DB_ROW_PUT_RESTART].v = 0;
	stats[WT_STAT_DB_STAT_CLEAR].v = 0;
	stats[WT_STAT_DB_STAT_PRINT].v = 0;
	stats[WT_STAT_DB_SYNC].v = 0;
	stats[WT_STAT_DB_VERIFY].v = 0;
	stats[WT_STAT_ENV_CACHE_SIZE_GET].v = 0;
	stats[WT_STAT_ENV_CACHE_SIZE_SET].v = 0;
	stats[WT_STAT_ENV_CLOSE].v = 0;
	stats[WT_STAT_ENV_DATA_UPDATE_INITIAL_GET].v = 0;
	stats[WT_STAT_ENV_DATA_UPDATE_INITIAL_SET].v = 0;
	stats[WT_STAT_ENV_DATA_UPDATE_MAX_GET].v = 0;
	stats[WT_STAT_ENV_DATA_UPDATE_MAX_SET].v = 0;
	stats[WT_STAT_ENV_DB].v = 0;
	stats[WT_STAT_ENV_ERRCALL_GET].v = 0;
	stats[WT_STAT_ENV_ERRCALL_SET].v = 0;
	stats[WT_STAT_ENV_ERRFILE_GET].v = 0;
	stats[WT_STAT_ENV_ERRFILE_SET].v = 0;
	stats[WT_STAT_ENV_ERRPFX_GET].v = 0;
	stats[WT_STAT_ENV_ERRPFX_SET].v = 0;
	stats[WT_STAT_ENV_HAZARD_SIZE_GET].v = 0;
	stats[WT_STAT_ENV_HAZARD_SIZE_SET].v = 0;
	stats[WT_STAT_ENV_MSGCALL_GET].v = 0;
	stats[WT_STAT_ENV_MSGCALL_SET].v = 0;
	stats[WT_STAT_ENV_MSGFILE_GET].v = 0;
	stats[WT_STAT_ENV_MSGFILE_SET].v = 0;
	stats[WT_STAT_ENV_OPEN].v = 0;
	stats[WT_STAT_ENV_STAT_CLEAR].v = 0;
	stats[WT_STAT_ENV_STAT_PRINT].v = 0;
	stats[WT_STAT_ENV_SYNC].v = 0;
	stats[WT_STAT_ENV_TOC].v = 0;
	stats[WT_STAT_ENV_TOC_SIZE_GET].v = 0;
	stats[WT_STAT_ENV_TOC_SIZE_SET].v = 0;
	stats[WT_STAT_ENV_VERBOSE_GET].v = 0;
	stats[WT_STAT_ENV_VERBOSE_SET].v = 0;
	stats[WT_STAT_WT_TOC_CLOSE].v = 0;
}
