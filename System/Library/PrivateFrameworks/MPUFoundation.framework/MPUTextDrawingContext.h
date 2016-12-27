/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSString, NSAttributedString, NSStringDrawingContext, NSDictionary, UIImage;

@interface MPUTextDrawingContext : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSStringDrawingContext* _stringDrawingContext;
	long long _stringDrawingOptions;
	NSDictionary* _uniformTextAttributes;
	double _firstBaselineOffsetFromTop;
	double _lastBaselineOffsetFromBottom;
	UIImage* _image;
	CGSize _boundingSize;

}

@property (setter=_setText:,nonatomic,copy) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (setter=_setAttributedText:,nonatomic,copy) NSAttributedString * attributedText;                                //@synthesize attributedText=_attributedText - In the implementation block
@property (setter=_setStringDrawingContext:,nonatomic,retain) NSStringDrawingContext * stringDrawingContext;              //@synthesize stringDrawingContext=_stringDrawingContext - In the implementation block
@property (assign,setter=_setStringDrawingOptions:,nonatomic) long long stringDrawingOptions;                             //@synthesize stringDrawingOptions=_stringDrawingOptions - In the implementation block
@property (setter=_setUniformTextAttributes:,nonatomic,copy) NSDictionary * uniformTextAttributes;                        //@synthesize uniformTextAttributes=_uniformTextAttributes - In the implementation block
@property (setter=_setImage:,getter=_image,nonatomic,retain) UIImage * image;                                             //@synthesize image=_image - In the implementation block
@property (assign,setter=_setBoundingSize:,nonatomic) CGSize boundingSize;                                                //@synthesize boundingSize=_boundingSize - In the implementation block
@property (assign,setter=_setFirstBaselineOffsetFromTop:,nonatomic) double firstBaselineOffsetFromTop;                    //@synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop - In the implementation block
@property (assign,setter=_setLastBaselineOffsetFromBottom:,nonatomic) double lastBaselineOffsetFromBottom;                //@synthesize lastBaselineOffsetFromBottom=_lastBaselineOffsetFromBottom - In the implementation block
-(id)_image;
-(NSString *)text;
-(NSAttributedString *)attributedText;
-(void)_setText:(id)arg1 ;
-(CGSize)boundingSize;
-(NSStringDrawingContext *)stringDrawingContext;
-(void)_setImage:(id)arg1 ;
-(void)_setAttributedText:(id)arg1 ;
-(void)_setBoundingSize:(CGSize)arg1 ;
-(void)_setFirstBaselineOffsetFromTop:(double)arg1 ;
-(void)_setLastBaselineOffsetFromBottom:(double)arg1 ;
-(void)_setUniformTextAttributes:(id)arg1 ;
-(void)_setStringDrawingContext:(id)arg1 ;
-(void)_setStringDrawingOptions:(long long)arg1 ;
-(long long)stringDrawingOptions;
-(NSDictionary *)uniformTextAttributes;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
@end

