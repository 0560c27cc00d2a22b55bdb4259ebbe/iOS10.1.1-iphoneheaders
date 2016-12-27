/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OKPresentation, NSRecursiveLock, NSString, NSDate, NSMutableArray, UIColor, NSArray;

@interface OKPresentationInfo : NSObject {

	OKPresentation* _presentation;
	NSRecursiveLock* _infoLock;
	NSString* _uuid;
	NSDate* _creationDate;
	NSDate* _lastModifiedDate;
	NSString* _versionID;
	unsigned long long _format;
	unsigned long long _formatVersion;
	double _apiVersion;
	NSString* _producerIdentifier;
	double _producerVersion;
	BOOL _requiresProducer;
	NSMutableArray* _resolutions;
	BOOL _couchPotatoSupported;
	double _couchPotatoDelay;
	BOOL _motionSupported;
	BOOL _wheelControllerSupported;
	BOOL _overviewSupported;
	BOOL _trailerSupported;
	NSString* _trailerNavigatorName;
	NSString* _mainNavigatorName;
	NSString* _mainFeederName;
	UIColor* backgroundColor;
	BOOL _renderTimeLoggingSupported;
	double _couchPotatoStepDuration;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) OKPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (copy) NSString * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSDate * creationDate;                                  //@synthesize creationDate=_creationDate - In the implementation block
@property (copy) NSDate * lastModifiedDate;                              //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (copy) NSString * versionID;                                   //@synthesize versionID=_versionID - In the implementation block
@property (assign) unsigned long long formatVersion;                     //@synthesize formatVersion=_formatVersion - In the implementation block
@property (assign) double apiVersion;                                    //@synthesize apiVersion=_apiVersion - In the implementation block
@property (assign) unsigned long long format;                            //@synthesize format=_format - In the implementation block
@property (copy) NSString * producerIdentifier;                          //@synthesize producerIdentifier=_producerIdentifier - In the implementation block
@property (assign) double producerVersion;                               //@synthesize producerVersion=_producerVersion - In the implementation block
@property (assign) BOOL requiresProducer;                                //@synthesize requiresProducer=_requiresProducer - In the implementation block
@property (copy) NSArray * resolutions;                                  //@synthesize resolutions=_resolutions - In the implementation block
@property (assign) BOOL couchPotatoSupported;                            //@synthesize couchPotatoSupported=_couchPotatoSupported - In the implementation block
@property (assign) double couchPotatoDelay;                              //@synthesize couchPotatoDelay=_couchPotatoDelay - In the implementation block
@property (assign) BOOL motionSupported;                                 //@synthesize motionSupported=_motionSupported - In the implementation block
@property (assign) BOOL wheelControllerSupported;                        //@synthesize wheelControllerSupported=_wheelControllerSupported - In the implementation block
@property (assign) BOOL overviewSupported;                               //@synthesize overviewSupported=_overviewSupported - In the implementation block
@property (assign) BOOL trailerSupported;                                //@synthesize trailerSupported=_trailerSupported - In the implementation block
@property (copy) NSString * trailerNavigatorName;                        //@synthesize trailerNavigatorName=_trailerNavigatorName - In the implementation block
@property (copy) NSString * mainNavigatorName;                           //@synthesize mainNavigatorName=_mainNavigatorName - In the implementation block
@property (copy) NSString * mainFeederName;                              //@synthesize mainFeederName=_mainFeederName - In the implementation block
@property (retain) UIColor * backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign) BOOL renderTimeLoggingSupported;                      //@synthesize renderTimeLoggingSupported=_renderTimeLoggingSupported - In the implementation block
@property (assign) double couchPotatoStepDuration;                       //@synthesize couchPotatoStepDuration=_couchPotatoStepDuration - In the implementation block
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(id)dictionary;
-(void)reset;
-(unsigned long long)format;
-(void)lock;
-(void)unlock;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSString *)versionID;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(unsigned long long)formatVersion;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)importFromDictionary:(id)arg1 ;
-(double)apiVersion;
-(NSArray *)resolutions;
-(BOOL)requiresProducer;
-(NSString *)producerIdentifier;
-(void)setVersionID:(NSString *)arg1 ;
-(void)setFormatVersion:(unsigned long long)arg1 ;
-(void)setApiVersion:(double)arg1 ;
-(void)setProducerIdentifier:(NSString *)arg1 ;
-(void)setProducerVersion:(double)arg1 ;
-(void)setRequiresProducer:(BOOL)arg1 ;
-(void)setResolutions:(NSArray *)arg1 ;
-(void)setCouchPotatoSupported:(BOOL)arg1 ;
-(void)setCouchPotatoDelay:(double)arg1 ;
-(void)setCouchPotatoStepDuration:(double)arg1 ;
-(void)setTrailerSupported:(BOOL)arg1 ;
-(void)setTrailerNavigatorName:(NSString *)arg1 ;
-(void)setWheelControllerSupported:(BOOL)arg1 ;
-(void)setMainNavigatorName:(NSString *)arg1 ;
-(void)setMainFeederName:(NSString *)arg1 ;
-(void)setOverviewSupported:(BOOL)arg1 ;
-(void)setMotionSupported:(BOOL)arg1 ;
-(double)couchPotatoStepDuration;
-(double)couchPotatoDelay;
-(NSString *)trailerNavigatorName;
-(NSString *)mainNavigatorName;
-(NSString *)mainFeederName;
-(double)producerVersion;
-(BOOL)couchPotatoSupported;
-(BOOL)motionSupported;
-(BOOL)wheelControllerSupported;
-(BOOL)trailerSupported;
-(BOOL)overviewSupported;
-(BOOL)renderTimeLoggingSupported;
-(void)setRenderTimeLoggingSupported:(BOOL)arg1 ;
-(OKPresentation *)presentation;
@end

