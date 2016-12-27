/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioStationMatchMetadata.h>

@class NSString, NSNumber;

@interface RadioStationMatchLibraryTrackMetadata : RadioStationMatchMetadata {

	NSString* _albumArtistName;
	NSString* _albumName;
	NSString* _artistName;
	NSString* _composerName;
	NSString* _copyright;
	NSNumber* _discCount;
	NSNumber* _discNumber;
	NSNumber* _fileSize;
	NSString* _genreName;
	NSNumber* _compilation;
	NSNumber* _duration;
	NSString* _kind;
	NSString* _name;
	NSNumber* _storeAdamID;
	NSNumber* _storeCloudID;
	NSNumber* _trackCount;
	NSNumber* _trackNumber;
	NSNumber* _year;

}

@property (nonatomic,copy) NSString * albumArtistName;                               //@synthesize albumArtistName=_albumArtistName - In the implementation block
@property (nonatomic,copy) NSString * albumName;                                     //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                    //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * composerName;                                  //@synthesize composerName=_composerName - In the implementation block
@property (nonatomic,copy) NSString * copyright;                                     //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,copy) NSNumber * discCount;                                     //@synthesize discCount=_discCount - In the implementation block
@property (nonatomic,copy) NSNumber * discNumber;                                    //@synthesize discNumber=_discNumber - In the implementation block
@property (nonatomic,copy) NSNumber * fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSString * genreName;                                     //@synthesize genreName=_genreName - In the implementation block
@property (getter=isCompilation,nonatomic,copy) NSNumber * compilation;              //@synthesize compilation=_compilation - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * kind;                                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * storeAdamID;                                   //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,copy) NSNumber * storeCloudID;                                  //@synthesize storeCloudID=_storeCloudID - In the implementation block
@property (nonatomic,copy) NSNumber * trackCount;                                    //@synthesize trackCount=_trackCount - In the implementation block
@property (nonatomic,copy) NSNumber * trackNumber;                                   //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy) NSNumber * year;                                          //@synthesize year=_year - In the implementation block
+(id)metadataKey;
-(void)setComposerName:(NSString *)arg1 ;
-(NSNumber *)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSString *)kind;
-(NSNumber *)year;
-(void)setYear:(NSNumber *)arg1 ;
-(NSNumber *)fileSize;
-(void)setStoreAdamID:(NSNumber *)arg1 ;
-(NSNumber *)discNumber;
-(NSNumber *)discCount;
-(NSString *)composerName;
-(id)isCompilation;
-(NSNumber *)trackCount;
-(NSNumber *)trackNumber;
-(void)setTrackNumber:(NSNumber *)arg1 ;
-(void)setDiscNumber:(NSNumber *)arg1 ;
-(NSNumber *)storeAdamID;
-(void)setTrackCount:(NSNumber *)arg1 ;
-(void)setDiscCount:(NSNumber *)arg1 ;
-(void)setCompilation:(NSNumber *)arg1 ;
-(void)setStoreCloudID:(NSNumber *)arg1 ;
-(NSString *)albumArtistName;
-(NSNumber *)storeCloudID;
-(void)setAlbumArtistName:(NSString *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSString *)copyright;
-(void)setCopyright:(NSString *)arg1 ;
-(NSString *)genreName;
-(void)setGenreName:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(id)copyMetadataDictionary;
@end

