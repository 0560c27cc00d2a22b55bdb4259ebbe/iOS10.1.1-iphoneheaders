/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/StereoFusion.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StereoFusion.videoprocessor/StereoFusion.videoprocessor-Structs.h>
@interface ADCTuningParameters : NSObject {

	float _keypointsDetectionThreshold;
	float _defaultFocalLengthTeleMicrometers;
	float _defaultFocalLengthTeleMaxDeviationMicrometers;
	float _defaultFocalLengthWideMicrometers;
	float _defaultFocalLengthWideMaxDeviationMicrometers;
	AdaptiveCorrectionConfig _adaptiveCorrectionConfig;

}

@property (readonly) float keypointsDetectionThreshold;                                //@synthesize keypointsDetectionThreshold=_keypointsDetectionThreshold - In the implementation block
@property (readonly) float defaultFocalLengthTeleMicrometers;                          //@synthesize defaultFocalLengthTeleMicrometers=_defaultFocalLengthTeleMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthTeleMaxDeviationMicrometers;              //@synthesize defaultFocalLengthTeleMaxDeviationMicrometers=_defaultFocalLengthTeleMaxDeviationMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthWideMicrometers;                          //@synthesize defaultFocalLengthWideMicrometers=_defaultFocalLengthWideMicrometers - In the implementation block
@property (readonly) float defaultFocalLengthWideMaxDeviationMicrometers;              //@synthesize defaultFocalLengthWideMaxDeviationMicrometers=_defaultFocalLengthWideMaxDeviationMicrometers - In the implementation block
@property (readonly) AdaptiveCorrectionConfig adaptiveCorrectionConfig;                //@synthesize adaptiveCorrectionConfig=_adaptiveCorrectionConfig - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(float)keypointsDetectionThreshold;
-(const AdaptiveCorrectionConfig*)getAdaptiveCorrectionConfigPtr;
-(BOOL)readAdaptiveCorrectionConfig:(id)arg1 ;
-(float)checkAndCorrectFocalLengthTele:(float)arg1 ;
-(float)checkAndCorrectFocalLengthWide:(float)arg1 ;
-(float)defaultFocalLengthTeleMicrometers;
-(float)defaultFocalLengthTeleMaxDeviationMicrometers;
-(float)defaultFocalLengthWideMicrometers;
-(float)defaultFocalLengthWideMaxDeviationMicrometers;
-(AdaptiveCorrectionConfig)adaptiveCorrectionConfig;
@end

