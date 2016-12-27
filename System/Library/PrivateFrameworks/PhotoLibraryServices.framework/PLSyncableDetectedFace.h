/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSSet;


@protocol PLSyncableDetectedFace <NSObject>
@property (assign,nonatomic) double centerX; 
@property (assign,nonatomic) double centerY; 
@property (assign,nonatomic) double size; 
@property (assign,nonatomic) int faceAlgorithmVersion; 
@property (nonatomic,copy) NSDate * adjustmentVersion; 
@property (nonatomic,retain) id<PLSyncablePerson> person; 
@property (nonatomic,retain) NSSet * rejectedPeople; 
@property (nonatomic,retain) id<PLSyncablePerson> personBeingKeyFace; 
@property (assign,nonatomic) int sourceWidth; 
@property (assign,nonatomic) int sourceHeight; 
@property (assign,nonatomic) BOOL manual; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) BOOL nameSourceAuto; 
@property (assign,nonatomic) short cloudLocalState; 
@required
-(double)size;
-(void)setHidden:(BOOL)arg1;
-(void)setSize:(double)arg1;
-(void)setPerson:(id)arg1;
-(id<PLSyncablePerson>)person;
-(BOOL)hidden;
-(short)cloudLocalState;
-(void)setCloudLocalState:(short)arg1;
-(double)centerX;
-(double)centerY;
-(int)sourceWidth;
-(int)sourceHeight;
-(BOOL)manual;
-(id<PLSyncablePerson>)personBeingKeyFace;
-(NSSet *)rejectedPeople;
-(void)setNameSourceAuto:(BOOL)arg1;
-(int)faceAlgorithmVersion;
-(void)setFaceAlgorithmVersion:(int)arg1;
-(void)setCenterX:(double)arg1;
-(void)setCenterY:(double)arg1;
-(void)setManual:(BOOL)arg1;
-(BOOL)nameSourceAuto;
-(NSDate *)adjustmentVersion;
-(void)setSourceWidth:(int)arg1;
-(void)setSourceHeight:(int)arg1;
-(void)setRejectedPeople:(id)arg1;
-(void)setPersonBeingKeyFace:(id)arg1;
-(void)setAdjustmentVersion:(id)arg1;

@end

