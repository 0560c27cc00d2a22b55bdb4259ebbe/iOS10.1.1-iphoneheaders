/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CPLIDMapping : NSObject {

	NSString* _cloudIdentifier;
	NSString* _localIdentifier;
	BOOL _final;

}

@property (nonatomic,readonly) NSString * cloudIdentifier;              //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;              //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (getter=isFinal,nonatomic,readonly) BOOL final;               //@synthesize final=_final - In the implementation block
-(NSString *)cloudIdentifier;
-(NSString *)localIdentifier;
-(BOOL)isFinal;
@end

