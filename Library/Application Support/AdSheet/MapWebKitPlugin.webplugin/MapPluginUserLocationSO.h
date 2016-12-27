/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MapPluginUserLocationSO : NSObject {

	double latitude;
	double longitude;
	double altitude;
	double horizontalAccuracy;
	double verticalAccuracy;

}

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) double verticalAccuracy; 
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(double)altitude;
-(id)attributeKeys;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(double)latitude;
-(double)longitude;
@end

