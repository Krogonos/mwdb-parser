// types used to define data-types, not referenced within the wdb files.
enum e_t_coltype {
	CT_FLOAT = 0,
	CT_STRING,
	CT_BITMASK,
	CT_U8,
	CT_U16,
	CT_U32,
	CT_S8,
	CT_S16,
	CT_S32
};

// the wdb header
struct {
	char		signature[4];
	uint32_t	version;
	char		language[4];
	uint32_t	rowcount;
	uint32_t	unknown;
} header;

struct {
	uint32_t	version;
	char		signature[4];

	char		*wdbschema;
	char		*sqlschema;
} config;

//   enumerated array of our column types.
enum e_t_coltype	field_types[1024];
int			field_count;
