/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface SUGradient : NSObject <NSCoding, NSCopying> {

	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	BOOL _sorted;
	long long _type;

}

@property (readonly) long long gradientType; 
@property (readonly) SUGradientPoint p0; 
@property (readonly) SUGradientPoint p1; 
@property (readonly) NSArray * colorStopColors; 
@property (readonly) NSArray * colorStopOffsets; 
@property (readonly) long long numberOfColorStops; 
+(id)gradientWithColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(long long)numberOfColorStops;
-(NSArray *)colorStopColors;
-(void)addColorStopWithOffset:(double)arg1 color:(CGColorRef)arg2 ;
-(CGShadingRef)copyShading;
-(id)initWithPoint0:(SUGradientPoint)arg1 point1:(SUGradientPoint)arg2 type:(long long)arg3 ;
-(id)newPatternColorWithSize:(CGSize)arg1 opaque:(BOOL)arg2 ;
-(CGGradientRef)copyCGGradient;
-(SUGradientPoint)p0;
-(SUGradientPoint)p1;
-(NSArray *)colorStopOffsets;
-(long long)gradientType;
-(id)initWithPropertyList:(id)arg1 ;
@end

