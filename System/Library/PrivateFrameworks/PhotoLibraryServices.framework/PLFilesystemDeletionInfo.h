/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface PLFilesystemDeletionInfo : NSObject {

	NSString* _directory;
	NSString* _filename;
	NSURL* _objectIDURI;
	NSArray* _fileURLs;
	unsigned long long _thumbnailIndex;
	NSString* _thumbnailIdentifier;
	NSString* _uuid;
	unsigned long long _timestamp;

}

@property (retain) NSArray * fileURLs;                               //@synthesize fileURLs=_fileURLs - In the implementation block
@property (retain) NSString * thumbnailIdentifier;                   //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (retain,readonly) NSURL * objectIDURI;                     //@synthesize objectIDURI=_objectIDURI - In the implementation block
@property (readonly) unsigned long long thumbnailIndex;              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (retain,readonly) NSString * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (retain,readonly) NSString * directory;                    //@synthesize directory=_directory - In the implementation block
@property (retain,readonly) NSString * filename;                     //@synthesize filename=_filename - In the implementation block
+(id)deletionInfoWithAsset:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)uuid;
-(NSString *)filename;
-(NSString *)thumbnailIdentifier;
-(id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8 ;
-(NSURL *)objectIDURI;
-(NSArray *)fileURLs;
-(void)setFileURLs:(NSArray *)arg1 ;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
-(NSString *)directory;
-(unsigned long long)thumbnailIndex;
@end

