/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ResponseKit/ResponseKit-Structs.h>
#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
-(id)init;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(LSMMapRef)polarityMapForLanguageID:(id)arg1 ;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

