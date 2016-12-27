/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DCService, NSString;

@interface DCRelativePath : NSObject {

	DCService* _service;
	NSString* _string;
	NSString* _firstPathComponent;

}

@property (retain,readonly) DCService * service;                        //@synthesize service=_service - In the implementation block
@property (retain,readonly) NSString * string;                          //@synthesize string=_string - In the implementation block
@property (retain,readonly) NSString * firstPathComponent;              //@synthesize firstPathComponent=_firstPathComponent - In the implementation block
@property (retain,readonly) NSString * lastPathComponent; 
+(id)relativePathWithString:(id)arg1 forService:(id)arg2 ;
+(id)rootForService:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(NSString *)lastPathComponent;
-(NSString *)string;
-(BOOL)isRoot;
-(DCService *)service;
-(id)relativePathByDeletingLastPathComponent;
-(NSString *)firstPathComponent;
-(id)relativePathByAppendingPathComponent:(id)arg1 ;
-(id)relativePathForAssetType:(id)arg1 withUnderlyingItemDocumentIdentifier:(id)arg2 ;
-(id)relativePathByAppendingPath:(id)arg1 ;
-(id)metadataPath;
@end

