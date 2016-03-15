//
//  ViewController.h
//  WifiShareDemo
//
//  Created by tangjianzhuo on 16/3/14.
//  Copyright © 2016年 JanzTam. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>

@interface ViewController : UIViewController <MCBrowserViewControllerDelegate, MCSessionDelegate>
{
    __block BOOL _isSendData;
    NSMutableArray *marrFileData, *marrReceiveData;
    NSInteger noOfdata, noOfDataSend;
}

@property (nonatomic, strong) MCBrowserViewController *browserVC;
@property (nonatomic, strong) MCAdvertiserAssistant *advertiser;
@property (nonatomic, strong) MCSession *mySession;
@property (nonatomic, strong) MCPeerID *myPeerID;


@end

