/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPDecoderDataInfo.h>
@class TSPDigest, NSString;


@protocol TSPDecoderDataInfo <NSObject>
@property (nonatomic,readonly) TSPDigest * digest; 
@property (nonatomic,readonly) NSString * preferredFilename; 
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * externalFilePath; 
@required
-(NSString *)documentResourceLocator;
-(NSString *)preferredFilename;
-(NSString *)externalFilePath;
-(TSPDigest *)digest;

@end


@class TSPDigest, NSString;

@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo> {

	TSPDigest* _digest;
	NSString* _preferredFilename;
	NSString* _externalFilePath;
	NSString* _documentResourceLocator;
	long long _identifier;

}

@property (nonatomic,readonly) long long identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSPDigest * digest;                              //@synthesize digest=_digest - In the implementation block
@property (nonatomic,readonly) NSString * preferredFilename;                    //@synthesize preferredFilename=_preferredFilename - In the implementation block
@property (nonatomic,readonly) NSString * documentResourceLocator;              //@synthesize documentResourceLocator=_documentResourceLocator - In the implementation block
@property (nonatomic,readonly) NSString * externalFilePath;                     //@synthesize externalFilePath=_externalFilePath - In the implementation block
-(NSString *)documentResourceLocator;
-(id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5 ;
-(id)init;
-(long long)identifier;
-(NSString *)preferredFilename;
-(NSString *)externalFilePath;
-(id)initWithMessage:(const DataInfo*)arg1 ;
-(TSPDigest *)digest;
@end

