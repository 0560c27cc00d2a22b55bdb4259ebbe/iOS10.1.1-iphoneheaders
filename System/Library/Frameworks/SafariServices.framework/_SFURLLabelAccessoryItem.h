/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariServices/SafariServices-Structs.h>
@class SFCrossfadingImageView;

@interface _SFURLLabelAccessoryItem : NSObject {

	SFCrossfadingImageView* _view;
	double _spacing;
	double _squishedSpacing;
	double _verticalOffset;
	CGSize _size;
	CGSize _squishedSize;
	CGSize _interpolatedSize;

}

@property (nonatomic,retain) SFCrossfadingImageView * view;              //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) double spacing;                             //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double squishedSpacing;                     //@synthesize squishedSpacing=_squishedSpacing - In the implementation block
@property (assign,nonatomic) double verticalOffset;                      //@synthesize verticalOffset=_verticalOffset - In the implementation block
@property (assign,nonatomic) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGSize squishedSize;                        //@synthesize squishedSize=_squishedSize - In the implementation block
@property (assign,nonatomic) CGSize interpolatedSize;                    //@synthesize interpolatedSize=_interpolatedSize - In the implementation block
-(CGSize)size;
-(SFCrossfadingImageView *)view;
-(void)setView:(SFCrossfadingImageView *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setSpacing:(double)arg1 ;
-(double)spacing;
-(double)squishedSpacing;
-(void)setSquishedSize:(CGSize)arg1 ;
-(CGSize)squishedSize;
-(void)setInterpolatedSize:(CGSize)arg1 ;
-(CGSize)interpolatedSize;
-(double)verticalOffset;
-(void)setSquishedSpacing:(double)arg1 ;
-(void)setVerticalOffset:(double)arg1 ;
@end

