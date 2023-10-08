#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode)
extern void ZipFile_Open_m48521D5C42FB5FDDB682BD190F06D9FC1EF53178 (void);
// 0x00000002 System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
extern void ZipFile_Open_m0CAF94BA8CAA42F3062A39A9F137121D3453A6AB (void);
// 0x00000003 System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::CreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String)
extern void ZipFileExtensions_CreateEntryFromFile_m277997721A1EFD688B920378AF6774B386EFE5CD (void);
// 0x00000004 System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipFileExtensions::DoCreateEntryFromFile(System.IO.Compression.ZipArchive,System.String,System.String,System.Nullable`1<System.IO.Compression.CompressionLevel>)
extern void ZipFileExtensions_DoCreateEntryFromFile_mE84AEB5717A87869F6AC2AAADBFF83AF699E7C98 (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	ZipFile_Open_m48521D5C42FB5FDDB682BD190F06D9FC1EF53178,
	ZipFile_Open_m0CAF94BA8CAA42F3062A39A9F137121D3453A6AB,
	ZipFileExtensions_CreateEntryFromFile_m277997721A1EFD688B920378AF6774B386EFE5CD,
	ZipFileExtensions_DoCreateEntryFromFile_mE84AEB5717A87869F6AC2AAADBFF83AF699E7C98,
};
static const int32_t s_InvokerIndices[4] = 
{
	9954,
	8947,
	8952,
	8353,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule;
const Il2CppCodeGenModule g_System_IO_Compression_FileSystem_CodeGenModule = 
{
	"System.IO.Compression.FileSystem.dll",
	4,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
