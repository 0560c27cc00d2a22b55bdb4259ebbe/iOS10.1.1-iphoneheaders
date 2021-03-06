/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableObject.h>
#import <libobjc.A.dylib/INImageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface INImage : NSObject <INCacheableObject, INImageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSData* _imageData;
	NSURL* _uri;
	NSString* _name;
	NSString* _bundlePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@property (nonatomic,copy,readonly) NSString * _identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri;                               //@synthesize uri=_uri - In the implementation block
@property (setter=_setName:,nonatomic,copy) NSString * _name;                          //@synthesize name=_name - In the implementation block
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath;              //@synthesize bundlePath=_bundlePath - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithUIImage:(id)arg1 ;
+(CGSize)imageSizeForIntentResponse:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)imageWithImageData:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)_name;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(NSString *)cacheIdentifier;
-(NSData *)_imageData;
-(NSString *)_identifier;
-(void)_setImageData:(id)arg1 ;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1 ;
-(void)_setUri:(id)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(NSURL *)_uri;
-(NSString *)_bundlePath;
@end

