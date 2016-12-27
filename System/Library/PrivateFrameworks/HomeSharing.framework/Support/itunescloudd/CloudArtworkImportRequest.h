/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CloudArtworkImportRequest : NSObject {

	BOOL _allowsCellularData;
	unsigned _mediaType;
	unsigned long long _cloudID;
	NSString* _token;
	long long _artworkType;
	/*^block*/id _completionHandler;

}

@property (assign,nonatomic) unsigned long long cloudID;              //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long artworkType;                   //@synthesize artworkType=_artworkType - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularData;                 //@synthesize allowsCellularData=_allowsCellularData - In the implementation block
@property (nonatomic,copy) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setAllowsCellularData:(BOOL)arg1 ;
-(BOOL)allowsCellularData;
-(unsigned long long)cloudID;
-(void)setCloudID:(unsigned long long)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(long long)artworkType;
-(void)setArtworkType:(long long)arg1 ;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
@end

