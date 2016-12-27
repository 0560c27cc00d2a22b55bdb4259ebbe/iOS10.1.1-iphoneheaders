/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSAttributedString;

@interface OKProducerMediaAttributes : NSObject <NSSecureCoding, NSCopying> {

	double _duration;
	double _scale;
	double _scale2;
	NSString* _text;
	NSAttributedString* _attributedText;
	CGPoint _offset;
	CGPoint _offset2;

}

@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGPoint offset2;                                  //@synthesize offset2=_offset2 - In the implementation block
@property (assign,nonatomic) double scale2;                                    //@synthesize scale2=_scale2 - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)duration;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)hasText;
-(NSAttributedString *)attributedText;
-(void)clearText;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)updateWithText:(id)arg1 ;
-(void)setOffset2:(CGPoint)arg1 ;
-(void)setScale2:(double)arg1 ;
-(CGPoint)offset2;
-(double)scale2;
@end

