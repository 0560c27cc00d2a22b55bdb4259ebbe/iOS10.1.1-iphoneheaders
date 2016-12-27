/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMStillImageCaptureResult, NSURL, NSString, NSDate, NSDictionary, NSError;

@interface CAMStillImageLocalPersistenceResult : NSObject {

	CAMStillImageCaptureResult* _captureResult;
	NSURL* _localDestinationURL;
	NSURL* _linkedDestinationURL;
	NSString* _localDiagnosticsPath;
	NSString* _localFilteredPreviewPath;
	NSString* _localPersistenceUUID;
	NSDate* _creationDate;
	NSString* _uniformTypeIdentifier;
	long long _imageOrientation;
	NSDictionary* _metadata;
	NSError* _error;

}

@property (nonatomic,readonly) CAMStillImageCaptureResult * captureResult;              //@synthesize captureResult=_captureResult - In the implementation block
@property (nonatomic,copy,readonly) NSURL * localDestinationURL;                        //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkedDestinationURL;                       //@synthesize linkedDestinationURL=_linkedDestinationURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * localDiagnosticsPath;                    //@synthesize localDiagnosticsPath=_localDiagnosticsPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localFilteredPreviewPath;                //@synthesize localFilteredPreviewPath=_localFilteredPreviewPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * localPersistenceUUID;                    //@synthesize localPersistenceUUID=_localPersistenceUUID - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniformTypeIdentifier;                   //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long imageOrientation;                              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(id)init;
-(long long)imageOrientation;
-(NSDictionary *)metadata;
-(NSError *)error;
-(NSDate *)creationDate;
-(NSString *)uniformTypeIdentifier;
-(NSURL *)localDestinationURL;
-(NSURL *)linkedDestinationURL;
-(NSString *)localPersistenceUUID;
-(id)initWithCaptureResult:(id)arg1 atURL:(id)arg2 linkedURL:(id)arg3 diagnosticsPath:(id)arg4 filteredPreviewPath:(id)arg5 withUUID:(id)arg6 creationDate:(id)arg7 uniformTypeIdentifier:(id)arg8 orientation:(long long)arg9 metadata:(id)arg10 error:(id)arg11 ;
-(CAMStillImageCaptureResult *)captureResult;
-(NSString *)localFilteredPreviewPath;
-(NSString *)localDiagnosticsPath;
@end

