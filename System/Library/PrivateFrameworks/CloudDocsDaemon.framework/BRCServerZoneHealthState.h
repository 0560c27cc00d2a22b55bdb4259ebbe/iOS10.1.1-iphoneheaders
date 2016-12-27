/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BRFieldCKInfo;

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying> {

	int _state;
	BRFieldCKInfo* _ckInfo;

}

@property (nonatomic,readonly) BRFieldCKInfo * ckInfo;              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,readonly) int state;                           //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(id)initWithCKInfo:(id)arg1 state:(int)arg2 ;
-(id)initWithServerZoneHealthState:(id)arg1 ;
@end
