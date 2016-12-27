/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@class FDOverfeatNetwork;

@interface DCNEspressoOverfeatDetector : NSObject {

	int tileSizeScaleFactor;
	int tileDimension;
	int localFaceMerging;
	FaceList* face_list;
	FDOverfeatNetwork* _enet;
	double _confidenceThreshold;
	double _minBoundingBoxThreshold;

}

@property (nonatomic,retain) FDOverfeatNetwork * enet;                    //@synthesize enet=_enet - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;                  //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign,nonatomic) double minBoundingBoxThreshold;              //@synthesize minBoundingBoxThreshold=_minBoundingBoxThreshold - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)commonInit;
-(id)initWithNetwork:(id)arg1 ;
-(void)computeBBoxUsingProb:(shared_ptr<Espresso::blob<float, 3> >*)arg1 box:(shared_ptr<Espresso::blob<float, 3> >*)arg2 andScalefactor:(float)arg3 padX:(float)arg4 padY:(float)arg5 ;
-(void)fillFaceList;
-(void)mergeFaceList;
-(void)runNetwork:(CGImageRef)arg1 ;
-(id)getFacesFromNetworkResultOriginalWidth:(float)arg1 originalHeight:(float)arg2 ;
-(id)detectObjectsOnImage:(CGImageRef)arg1 detectionOptions:(id)arg2 error:(id*)arg3 ;
-(id)detectObjectsOnImagesBatch:(/*^block*/id)arg1 detectionOptions:(id)arg2 error:(id*)arg3 ;
-(double)compareObject:(id)arg1 withObject:(id)arg2 error:(id*)arg3 ;
-(id)getDescription;
-(FDOverfeatNetwork *)enet;
-(void)setEnet:(FDOverfeatNetwork *)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(double)minBoundingBoxThreshold;
-(void)setMinBoundingBoxThreshold:(double)arg1 ;
@end

