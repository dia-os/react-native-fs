//
//  RNFSManager.h
//  RNFSManager
//
//  Created by Johannes Lumpe on 08/05/15.
//  Copyright (c) 2015 Johannes Lumpe. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTLog.h>


@interface RNFSManager : NSObject <RCTBridgeModule,UIDocumentInteractionControllerDelegate>
@property (retain) UIDocumentInteractionController * documentController;

@end
