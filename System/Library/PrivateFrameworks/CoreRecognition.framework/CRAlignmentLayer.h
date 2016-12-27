/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CALayer.h>

@class CATextLayer, CAShapeLayer, CALayer, NSMutableArray;

@interface CRAlignmentLayer : CALayer {

	CATextLayer* _instructionLayer;
	CAShapeLayer* _maskLayer;
	CAShapeLayer* _outlineLayer;
	CALayer* _infoLayer;
	NSMutableArray* _cardNumberLayers;
	CATextLayer* _cardholderNameLayer;
	CATextLayer* _expirationDateLayer;
	CGPoint _cardNumberHorizontalDefaultPos;
	CGRect _cardNumberHorizontalDefaultBounds;

}

@property (retain) CAShapeLayer * maskLayer;                                        //@synthesize maskLayer=_maskLayer - In the implementation block
@property (retain) CAShapeLayer * outlineLayer;                                     //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (retain) CALayer * infoLayer;                                             //@synthesize infoLayer=_infoLayer - In the implementation block
@property (retain) NSMutableArray * cardNumberLayers;                               //@synthesize cardNumberLayers=_cardNumberLayers - In the implementation block
@property (assign,nonatomic) CGPoint cardNumberHorizontalDefaultPos;                //@synthesize cardNumberHorizontalDefaultPos=_cardNumberHorizontalDefaultPos - In the implementation block
@property (assign,nonatomic) CGRect cardNumberHorizontalDefaultBounds;              //@synthesize cardNumberHorizontalDefaultBounds=_cardNumberHorizontalDefaultBounds - In the implementation block
@property (retain) CATextLayer * cardholderNameLayer;                               //@synthesize cardholderNameLayer=_cardholderNameLayer - In the implementation block
@property (retain) CATextLayer * expirationDateLayer;                               //@synthesize expirationDateLayer=_expirationDateLayer - In the implementation block
@property (retain) CATextLayer * instructionLayer;                                  //@synthesize instructionLayer=_instructionLayer - In the implementation block
+(id)layer;
-(id)init;
-(void)layoutSublayers;
-(void)setInstructionLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)instructionLayer;
-(void)setInfoLayer:(CALayer *)arg1 ;
-(CALayer *)infoLayer;
-(void)setCardNumberHorizontalDefaultPos:(CGPoint)arg1 ;
-(void)setCardNumberHorizontalDefaultBounds:(CGRect)arg1 ;
-(void)setCardNumberLayers:(NSMutableArray *)arg1 ;
-(CGRect)cardNumberHorizontalDefaultBounds;
-(CGPoint)cardNumberHorizontalDefaultPos;
-(NSMutableArray *)cardNumberLayers;
-(void)setCardholderNameLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)cardholderNameLayer;
-(void)setExpirationDateLayer:(CATextLayer *)arg1 ;
-(CATextLayer *)expirationDateLayer;
-(CGPoint)pointOnInfoLayerForPointOnCard:(CGPoint)arg1 ;
-(void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2 ;
-(void)resetLayer;
-(void)fadePlacementImage;
-(void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(CGPoint)arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(CGPoint)arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(/*^block*/id)arg10 ;
-(void)animateFoundCardRect:(id)arg1 ;
-(void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4 ;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)maskLayer;
-(CAShapeLayer *)outlineLayer;
-(void)setOutlineLayer:(CAShapeLayer *)arg1 ;
-(CGRect)alignmentRect;
@end

