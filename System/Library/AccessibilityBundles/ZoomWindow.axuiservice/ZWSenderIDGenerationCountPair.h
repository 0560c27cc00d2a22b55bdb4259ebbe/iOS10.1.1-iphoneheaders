/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ZWSenderIDGenerationCountPair : NSObject <NSCopying> {

	unsigned long long _senderID;
	long long _generationCount;

}

@property (assign,nonatomic) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
@property (assign,nonatomic) long long generationCount;                //@synthesize generationCount=_generationCount - In the implementation block
-(id)initWithSenderID:(unsigned long long)arg1 generationCount:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)generationCount;
-(void)setGenerationCount:(long long)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(unsigned long long)senderID;
@end
