/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUInputBundle <NSObject>
@required
-(BOOL)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;
-(unsigned)crc32ForEntry:(id)arg1;

@end

