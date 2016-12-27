/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCBReader.h>

@class NSString;

@interface EBReader : OCBReader {

	NSString* mTemporaryDirectory;
	XlObjectFactory* mXlObjectFactory;
	BOOL mUseStringOptimization;
	BOOL mIsFileStructuredStorage;
	const void* mBuffer;

}

@property (nonatomic,retain) NSString * temporaryDirectory; 
@property (nonatomic,readonly) XlBinaryReader* xlReader; 
@property (assign,nonatomic) BOOL useStringOptimization; 
@property (assign,nonatomic) BOOL isFileStructuredStorage; 
-(void)dealloc;
-(BOOL)start;
-(id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2 ;
-(id)read;
-(void)setIsFileStructuredStorage:(BOOL)arg1 ;
-(BOOL)isFileStructuredStorage;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKeyRef)arg1 baseOutputFilenameInUTF8:(const char*)arg2 ;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(XlBinaryReader*)xlReader;
-(NSString *)temporaryDirectory;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
-(BOOL)useStringOptimization;
-(void)setUseStringOptimization:(BOOL)arg1 ;
@end

