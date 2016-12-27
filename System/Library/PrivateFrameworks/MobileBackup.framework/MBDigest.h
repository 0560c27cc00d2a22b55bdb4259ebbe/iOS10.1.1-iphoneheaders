/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MBDigest : NSObject
+(id)sha1;
+(id)sha256;
+(id)sha1ForData:(id)arg1 ;
+(id)sha1ForFileAtPath:(id)arg1 error:(id*)arg2 ;
+(id)sha1ForString:(id)arg1 ;
+(id)sha1HmacForString:(id)arg1 key:(id)arg2 ;
+(long long)simpleChecksumForString:(id)arg1 ;
-(void)updateWithString:(id)arg1 ;
-(void)finalWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)digestForData:(id)arg1 ;
-(id)digestForFileAtPath:(id)arg1 error:(id*)arg2 ;
-(id)digestForString:(id)arg1 ;
-(BOOL)updateWithFile:(id)arg1 error:(id*)arg2 ;
-(void)updateWithInt64:(long long)arg1 ;
-(void)updateWithInt32:(int)arg1 ;
-(void)updateWithDate:(id)arg1 ;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)updateWithData:(id)arg1 ;
-(id)final;
@end

