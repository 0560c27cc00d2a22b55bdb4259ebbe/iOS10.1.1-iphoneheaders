/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, NSData;

@interface MFFileArchiveEntry : NSObject {

	BOOL _isDeflated;
	NSString* _path;
	long long _uncompressedSize;
	NSData* _contents;
	NSRange _compressedRange;

}

@property (retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (assign) long long uncompressedSize;              //@synthesize uncompressedSize=_uncompressedSize - In the implementation block
@property (assign) NSRange compressedRange;                 //@synthesize compressedRange=_compressedRange - In the implementation block
@property (assign) BOOL isDeflated;                         //@synthesize isDeflated=_isDeflated - In the implementation block
@property (retain) NSData * contents;                       //@synthesize contents=_contents - In the implementation block
+(id)archiveEntryWithCentralHeader:(CentralHeader*)arg1 archiveData:(id)arg2 ;
+(id)archiveEntry;
+(id)_inflateError:(int)arg1 ;
-(long long)uncompressedSize;
-(void)setUncompressedSize:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)path;
-(NSData *)contents;
-(void)setContents:(NSData *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(long long)compressedSize;
-(void)setIsDeflated:(BOOL)arg1 ;
-(void)setCompressedRange:(NSRange)arg1 ;
-(NSRange)compressedRange;
-(BOOL)isDeflated;
-(void)inflateWithWriter:(/*^block*/id)arg1 ;
-(id)initWithContents:(id)arg1 path:(id)arg2 ;
-(id)inflate;
-(id)fileName;
-(void)merge:(id)arg1 ;
@end

