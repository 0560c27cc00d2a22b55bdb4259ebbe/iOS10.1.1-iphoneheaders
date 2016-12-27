/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIViewTextProperties : NSObject <NSCopying> {

	double _baselineOffsetFromBottom;
	double _desiredOffsetTop;
	double _firstBaselineOffset;

}

@property (assign,nonatomic) double baselineOffsetFromBottom;              //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
@property (assign,nonatomic) double desiredOffsetTop;                      //@synthesize desiredOffsetTop=_desiredOffsetTop - In the implementation block
@property (assign,nonatomic) double firstBaselineOffset;                   //@synthesize firstBaselineOffset=_firstBaselineOffset - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)firstBaselineOffset;
-(double)baselineOffsetFromBottom;
-(double)desiredOffsetTop;
-(id)initWithStringLayout:(id)arg1 ;
-(void)setBaselineOffsetFromBottom:(double)arg1 ;
-(void)setFirstBaselineOffset:(double)arg1 ;
-(id)initWithTextLayout:(id)arg1 isExpanded:(BOOL)arg2 ;
-(void)setDesiredOffsetTop:(double)arg1 ;
@end

