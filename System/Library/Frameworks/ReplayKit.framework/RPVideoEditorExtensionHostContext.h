/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPVideoEditorExtensionHostProtocol.h>

@class RPVideoEditorHostViewController;

@interface RPVideoEditorExtensionHostContext : NSExtensionContext <RPVideoEditorExtensionHostProtocol> {

	RPVideoEditorHostViewController* _hostViewController;

}

@property (assign,nonatomic,__weak) RPVideoEditorHostViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id)extensionObjectProxy;
-(oneway void)extensionDidFinishWithActivityTypes:(id)arg1 ;
-(RPVideoEditorHostViewController *)hostViewController;
-(void)setHostViewController:(RPVideoEditorHostViewController *)arg1 ;
@end

