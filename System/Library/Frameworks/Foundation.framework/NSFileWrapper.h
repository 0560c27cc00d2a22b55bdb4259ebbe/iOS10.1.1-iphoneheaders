/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString, NSData, NSURL;

@interface NSFileWrapper : NSObject <NSCoding> {

	NSDictionary* _fileAttributes;
	NSString* _preferredFileName;
	NSString* _fileName;
	id _contents;
	id _icon;
	id _moreVars;

}

@property (getter=isDirectory,readonly) BOOL directory; 
@property (getter=isRegularFile,readonly) BOOL regularFile; 
@property (getter=isSymbolicLink,readonly) BOOL symbolicLink; 
@property (copy) NSString * preferredFilename; 
@property (copy) NSString * filename; 
@property (copy) NSDictionary * fileAttributes; 
@property (copy,readonly) NSData * serializedRepresentation; 
@property (copy,readonly) NSDictionary * fileWrappers; 
@property (copy,readonly) NSData * regularFileContents; 
@property (copy,readonly) NSURL * symbolicLinkDestinationURL; 
+(id)_pathForURL:(id)arg1 reading:(BOOL)arg2 error:(id*)arg3 ;
+(BOOL)_canSafelyMapFilesAtPath:(id)arg1 ;
+(BOOL)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3 ;
+(id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6 ;
+(void)_writeAttributes:(id)arg1 toURL:(id)arg2 ;
+(void)initialize;
+(void)_removeTemporaryDirectoryAtURL:(id)arg1 ;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6 ;
+(BOOL)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)sb_fileSize;
-(BOOL)isDirectory;
-(id)initRegularFileWithContents:(id)arg1 ;
-(BOOL)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)setPreferredFilename:(NSString *)arg1 ;
-(id)_addChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)_initDirectoryContents;
-(id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5 ;
-(void)_removeParent:(id)arg1 ;
-(NSDictionary *)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(void)_observePreferredFileNameOfChild:(id)arg1 ;
-(BOOL)isSymbolicLink;
-(BOOL)_matchesItemKind:(id)arg1 modificationDate:(id)arg2 ;
-(BOOL)matchesContentsOfURL:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2 ;
-(void)setFileAttributes:(NSDictionary *)arg1 ;
-(void)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2 ;
-(NSURL *)symbolicLinkDestinationURL;
-(void)_updateDescendantFileNames;
-(BOOL)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(BOOL)arg4 didHardLinking:(BOOL*)arg5 error:(id*)arg6 ;
-(id)_attributesToWrite;
-(id)_newImpl;
-(void)_addParent:(id)arg1 ;
-(id)keyForFileWrapper:(id)arg1 ;
-(void)_resetFileModificationDate;
-(id)_uniqueFileNameOfChild:(id)arg1 ;
-(NSData *)serializedRepresentation;
-(id)initDirectoryWithFileWrappers:(id)arg1 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg1 ;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_fullDescription:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(NSData *)regularFileContents;
-(NSString *)preferredFilename;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isRegularFile;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(NSDictionary *)fileAttributes;
@end

