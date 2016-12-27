/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDColor, GQDFilteredImage, NSString;

@interface GQDTexturedImageFill : NSObject <GQDNameMappable> {

	int mTechnique;
	GQDColor* mColor;
	GQDFilteredImage* mFilteredImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(id)imageBinary;
-(void)invalidateFilteredImage;
-(void)dealloc;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)technique;
@end

