/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PLImageGeometry : NSObject <NSCopying> {

	long long _appliedOrientation;
	CGRect _inputRect;

}

@property (nonatomic,readonly) CGRect inputRect;                                     //@synthesize inputRect=_inputRect - In the implementation block
@property (nonatomic,readonly) CGRect outputRect; 
@property (assign,nonatomic) long long appliedOrientation;                           //@synthesize appliedOrientation=_appliedOrientation - In the implementation block
@property (nonatomic,readonly) CGAffineTransform appliedTransform; 
@property (getter=isSizeInverted,nonatomic,readonly) BOOL sizeInverted; 
@property (getter=isMirrored,nonatomic,readonly) BOOL mirrored; 
+(id)geometryWithOutputSize:(CGSize)arg1 appliedOrientation:(long long)arg2 ;
+(id)geometryWithInputSize:(CGSize)arg1 initialOrientation:(long long)arg2 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyOrientation:(long long)arg1 ;
-(CGRect)inputRect;
-(CGRect)outputRect;
-(CGRect)_basisRect:(long long)arg1 ;
-(CGAffineTransform)_transformFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(BOOL)isMirrored;
-(void)flipVertically;
-(void)flipHorizontally;
-(void)rotateClockwise;
-(CGRect)inputRectForOutputRect:(CGRect)arg1 ;
-(CGRect)outputRectForInputRect:(CGRect)arg1 ;
-(CGAffineTransform)transformToOrientation:(long long)arg1 ;
-(CGAffineTransform)appliedTransform;
-(void)setAppliedOrientation:(long long)arg1 ;
-(BOOL)isSizeInverted;
-(id)initWithInputSize:(CGSize)arg1 ;
-(CGRect)denormalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(CGRect)normalizeRect:(CGRect)arg1 basis:(long long)arg2 ;
-(long long)appliedOrientation;
-(CGAffineTransform)transformFromOrientation:(long long)arg1 ;
-(void)rotateCounterClockwise;
@end

