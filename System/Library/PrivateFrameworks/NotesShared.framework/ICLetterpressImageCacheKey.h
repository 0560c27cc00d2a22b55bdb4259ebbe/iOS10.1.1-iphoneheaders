/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString;

@interface ICLetterpressImageCacheKey : NSObject <NSCopying> {

	double _scale;
	UIColor* _tintColor;
	NSString* _name;

}

@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(UIColor *)tintColor;
-(id)initWithName:(id)arg1 tintColor:(id)arg2 scale:(double)arg3 ;
@end

