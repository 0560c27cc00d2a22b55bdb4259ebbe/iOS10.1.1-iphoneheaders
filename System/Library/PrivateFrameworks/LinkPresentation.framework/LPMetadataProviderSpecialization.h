/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol LPMetadataProviderSpecializationDelegate;
@class NSURL;

@interface LPMetadataProviderSpecialization : NSObject {

	id<LPMetadataProviderSpecializationDelegate> _delegate;
	NSURL* _URL;

}

@property (assign,nonatomic,__weak) id<LPMetadataProviderSpecializationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                                             //@synthesize URL=_URL - In the implementation block
+(id)specializedMetadataProviderForURL:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<LPMetadataProviderSpecializationDelegate>)arg1 ;
-(id<LPMetadataProviderSpecializationDelegate>)delegate;
-(NSURL *)URL;
-(void)start;
-(id)initWithURL:(id)arg1 ;
@end

