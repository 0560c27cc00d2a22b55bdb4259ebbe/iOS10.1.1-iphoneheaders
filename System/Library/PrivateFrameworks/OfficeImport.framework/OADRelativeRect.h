/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRelativeRect : NSObject <NSCopying> {

	float mLeft;
	float mTop;
	float mRight;
	float mBottom;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLeft:(float)arg1 ;
-(float)left;
-(float)top;
-(float)right;
-(float)bottom;
-(id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4 ;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setBottom:(float)arg1 ;
@end

