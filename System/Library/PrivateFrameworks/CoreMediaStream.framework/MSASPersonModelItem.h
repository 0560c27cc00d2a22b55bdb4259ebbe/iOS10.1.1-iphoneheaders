/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@class MSASAlbum, NSString;

@interface MSASPersonModelItem : NSObject <NSCopying> {

	int _errorCount;
	MSASAlbum* _album;
	NSString* _albumGUID;
	id<NSObject> _object;

}

@property (assign,nonatomic) int errorCount;                    //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;              //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) id<NSObject> object;               //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id<NSObject>)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setObject:(id<NSObject>)arg1 ;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(NSString *)albumGUID;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
@end

