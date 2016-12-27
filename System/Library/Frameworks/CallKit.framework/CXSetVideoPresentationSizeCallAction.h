/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetVideoPresentationSizeCallAction : CXCallAction {

	CGSize _videoPresentationSize;

}

@property (assign,nonatomic) CGSize videoPresentationSize;              //@synthesize videoPresentationSize=_videoPresentationSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(CGSize)videoPresentationSize;
-(void)setVideoPresentationSize:(CGSize)arg1 ;
-(id)initWithCallUUID:(id)arg1 videoPresentationSize:(CGSize)arg2 ;
@end

