/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNVCardSerializationStorage <NSObject>
@required
-(void)appendString:(id)arg1;
-(void)appendFormat:(id)arg1;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertString:(id)arg1 atMarker:(id)arg2;
-(unsigned long long)currentLength;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2;

@end

