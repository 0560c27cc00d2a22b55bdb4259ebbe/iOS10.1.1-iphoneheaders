/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBOutlineBulletKey : NSObject <NSCopying> {

	unsigned mSlideId;
	int mTextType;
	unsigned mPlaceholderIndex;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOutlineBullet:(id)arg1 ;
-(id)initWithSlideId:(unsigned)arg1 textType:(int)arg2 placeholderIndex:(unsigned)arg3 ;
@end

