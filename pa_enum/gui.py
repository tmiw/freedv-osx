# -*- coding: utf-8 -*- 

###########################################################################
## Python code generated with wxFormBuilder (version Mar 17 2012)
## http://www.wxformbuilder.org/
##
## PLEASE DO "NOT" EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class MainFrameBase
###########################################################################

class MainFrameBase ( wx.Frame ):
	
	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"PortAudio Device Enumeration"), pos = wx.DefaultPosition, size = wx.Size( 790,400 ), style = wx.CLOSE_BOX|wx.DEFAULT_FRAME_STYLE|wx.RESIZE_BORDER|wx.TAB_TRAVERSAL )
		
		self.SetSizeHintsSz( wx.DefaultSize, wx.DefaultSize )
		
		mainSizer = wx.BoxSizer( wx.VERTICAL )
		
		self.m_panel1 = wx.Panel( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer4 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_notebook1 = wx.Notebook( self.m_panel1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.NB_BOTTOM )
		self.m_panelRx = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer20 = wx.BoxSizer( wx.VERTICAL )
		
		gSizer4 = wx.GridSizer( 2, 1, 0, 0 )
		
		sbSizer2 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelRx, wx.ID_ANY, _(u"Rx Radio Device") ), wx.VERTICAL )
		
		self.m_listCtrlRxInDevices = wx.ListCtrl( self.m_panelRx, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LC_HRULES|wx.LC_REPORT|wx.LC_VRULES )
		sbSizer2.Add( self.m_listCtrlRxInDevices, 1, wx.ALL|wx.EXPAND, 1 )
		
		bSizer811 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_staticText51 = wx.StaticText( self.m_panelRx, wx.ID_ANY, _(u"Device:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText51.Wrap( -1 )
		bSizer811.Add( self.m_staticText51, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		self.m_textCtrlRxIn = wx.TextCtrl( self.m_panelRx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer811.Add( self.m_textCtrlRxIn, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		self.m_staticText6 = wx.StaticText( self.m_panelRx, wx.ID_ANY, _(u"Sample Rate:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText6.Wrap( -1 )
		bSizer811.Add( self.m_staticText6, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_cbSampleRateRxInChoices = []
		self.m_cbSampleRateRxIn = wx.ComboBox( self.m_panelRx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_cbSampleRateRxInChoices, wx.CB_DROPDOWN )
		bSizer811.Add( self.m_cbSampleRateRxIn, 0, wx.ALL, 1 )
		
		
		sbSizer2.Add( bSizer811, 0, wx.EXPAND, 5 )
		
		
		gSizer4.Add( sbSizer2, 1, wx.EXPAND, 5 )
		
		sbSizer3 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelRx, wx.ID_ANY, _(u"Rx Speaker Stream") ), wx.VERTICAL )
		
		self.m_listCtrlRxOutDevices = wx.ListCtrl( self.m_panelRx, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LC_HRULES|wx.LC_REPORT|wx.LC_VRULES )
		sbSizer3.Add( self.m_listCtrlRxOutDevices, 1, wx.ALL|wx.EXPAND, 1 )
		
		bSizer81 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_staticText9 = wx.StaticText( self.m_panelRx, wx.ID_ANY, _(u"Device:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText9.Wrap( -1 )
		bSizer81.Add( self.m_staticText9, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5 )
		
		self.m_textRxOut = wx.TextCtrl( self.m_panelRx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer81.Add( self.m_textRxOut, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		self.m_staticText10 = wx.StaticText( self.m_panelRx, wx.ID_ANY, _(u"Sample Rate:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText10.Wrap( -1 )
		bSizer81.Add( self.m_staticText10, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_cbSampleRateRxOutChoices = []
		self.m_cbSampleRateRxOut = wx.ComboBox( self.m_panelRx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_cbSampleRateRxOutChoices, wx.CB_DROPDOWN )
		bSizer81.Add( self.m_cbSampleRateRxOut, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		
		sbSizer3.Add( bSizer81, 0, wx.EXPAND, 2 )
		
		
		gSizer4.Add( sbSizer3, 1, wx.EXPAND, 2 )
		
		
		bSizer20.Add( gSizer4, 1, wx.EXPAND, 1 )
		
		
		self.m_panelRx.SetSizer( bSizer20 )
		self.m_panelRx.Layout()
		bSizer20.Fit( self.m_panelRx )
		self.m_notebook1.AddPage( self.m_panelRx, _(u"Receive"), True )
		self.m_panelTx = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer18 = wx.BoxSizer( wx.VERTICAL )
		
		gSizer2 = wx.GridSizer( 2, 1, 0, 0 )
		
		sbSizer22 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelTx, wx.ID_ANY, _(u"Tx Microphone Stream") ), wx.VERTICAL )
		
		self.m_listCtrlTxInDevices = wx.ListCtrl( self.m_panelTx, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LC_HRULES|wx.LC_REPORT|wx.LC_VRULES )
		sbSizer22.Add( self.m_listCtrlTxInDevices, 1, wx.ALL|wx.EXPAND, 1 )
		
		bSizer83 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_staticText12 = wx.StaticText( self.m_panelTx, wx.ID_ANY, _(u"Device:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText12.Wrap( -1 )
		bSizer83.Add( self.m_staticText12, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		self.m_textCtrlTxIn = wx.TextCtrl( self.m_panelTx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer83.Add( self.m_textCtrlTxIn, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		self.m_staticText11 = wx.StaticText( self.m_panelTx, wx.ID_ANY, _(u"Sample Rate:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText11.Wrap( -1 )
		bSizer83.Add( self.m_staticText11, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_cbSampleRateTxInChoices = []
		self.m_cbSampleRateTxIn = wx.ComboBox( self.m_panelTx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_cbSampleRateTxInChoices, wx.CB_DROPDOWN )
		bSizer83.Add( self.m_cbSampleRateTxIn, 0, wx.ALL, 1 )
		
		
		sbSizer22.Add( bSizer83, 0, wx.EXPAND, 2 )
		
		
		gSizer2.Add( sbSizer22, 1, wx.EXPAND, 5 )
		
		sbSizer21 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelTx, wx.ID_ANY, _(u"Tx Radio Stream") ), wx.VERTICAL )
		
		self.m_listCtrlTxOutDevices = wx.ListCtrl( self.m_panelTx, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.LC_HRULES|wx.LC_REPORT|wx.LC_VRULES )
		sbSizer21.Add( self.m_listCtrlTxOutDevices, 1, wx.ALL|wx.EXPAND, 2 )
		
		bSizer82 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_staticText81 = wx.StaticText( self.m_panelTx, wx.ID_ANY, _(u"Device:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText81.Wrap( -1 )
		bSizer82.Add( self.m_staticText81, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 5 )
		
		self.m_textCtrTxOut = wx.TextCtrl( self.m_panelTx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer82.Add( self.m_textCtrTxOut, 1, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		self.m_staticText71 = wx.StaticText( self.m_panelTx, wx.ID_ANY, _(u"Sample Rate:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText71.Wrap( -1 )
		bSizer82.Add( self.m_staticText71, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 5 )
		
		m_cbSampleRateTxOutChoices = []
		self.m_cbSampleRateTxOut = wx.ComboBox( self.m_panelTx, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, m_cbSampleRateTxOutChoices, wx.CB_DROPDOWN )
		bSizer82.Add( self.m_cbSampleRateTxOut, 0, wx.ALL, 1 )
		
		
		sbSizer21.Add( bSizer82, 0, wx.EXPAND, 2 )
		
		
		gSizer2.Add( sbSizer21, 1, wx.EXPAND, 5 )
		
		
		bSizer18.Add( gSizer2, 1, wx.EXPAND, 1 )
		
		
		self.m_panelTx.SetSizer( bSizer18 )
		self.m_panelTx.Layout()
		bSizer18.Fit( self.m_panelTx )
		self.m_notebook1.AddPage( self.m_panelTx, _(u"Transmit"), False )
		self.m_panelAPI = wx.Panel( self.m_notebook1, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.TAB_TRAVERSAL )
		bSizer12 = wx.BoxSizer( wx.HORIZONTAL )
		
		gSizer31 = wx.GridSizer( 2, 1, 0, 0 )
		
		sbSizer1 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelAPI, wx.ID_ANY, _(u"PortAudio") ), wx.VERTICAL )
		
		gSizer3 = wx.GridSizer( 4, 2, 0, 0 )
		
		self.m_staticText7 = wx.StaticText( self.m_panelAPI, wx.ID_ANY, _(u"PortAudio Version String:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText7.Wrap( -1 )
		gSizer3.Add( self.m_staticText7, 0, wx.ALIGN_RIGHT|wx.ALL|wx.ALIGN_CENTER_VERTICAL, 1 )
		
		bSizer151 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_textStringVer = wx.TextCtrl( self.m_panelAPI, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.TE_READONLY )
		bSizer151.Add( self.m_textStringVer, 0, wx.ALL|wx.EXPAND, 1 )
		
		
		gSizer3.Add( bSizer151, 1, wx.EXPAND, 2 )
		
		self.m_staticText8 = wx.StaticText( self.m_panelAPI, wx.ID_ANY, _(u"PortAudio Int Version:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText8.Wrap( -1 )
		gSizer3.Add( self.m_staticText8, 0, wx.ALIGN_RIGHT|wx.ALL|wx.ALIGN_CENTER_VERTICAL, 1 )
		
		bSizer13 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_textIntVer = wx.TextCtrl( self.m_panelAPI, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, wx.TE_READONLY )
		bSizer13.Add( self.m_textIntVer, 0, wx.ALL|wx.ALIGN_CENTER_VERTICAL, 1 )
		
		
		gSizer3.Add( bSizer13, 1, wx.EXPAND, 5 )
		
		self.m_staticText5 = wx.StaticText( self.m_panelAPI, wx.ID_ANY, _(u"Device Count:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )
		gSizer3.Add( self.m_staticText5, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 1 )
		
		bSizer14 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_textCDevCount = wx.TextCtrl( self.m_panelAPI, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 45,-1 ), wx.TE_READONLY )
		self.m_textCDevCount.SetMaxSize( wx.Size( 45,-1 ) )
		
		bSizer14.Add( self.m_textCDevCount, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		
		gSizer3.Add( bSizer14, 1, wx.EXPAND, 5 )
		
		self.m_staticText4 = wx.StaticText( self.m_panelAPI, wx.ID_ANY, _(u"API Count:"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText4.Wrap( -1 )
		gSizer3.Add( self.m_staticText4, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALIGN_RIGHT|wx.ALL, 1 )
		
		bSizer15 = wx.BoxSizer( wx.VERTICAL )
		
		self.m_textAPICount = wx.TextCtrl( self.m_panelAPI, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.Size( 45,-1 ), wx.TE_READONLY )
		self.m_textAPICount.SetMaxSize( wx.Size( 45,-1 ) )
		
		bSizer15.Add( self.m_textAPICount, 0, wx.ALIGN_CENTER_VERTICAL|wx.ALL, 1 )
		
		
		gSizer3.Add( bSizer15, 1, wx.EXPAND, 5 )
		
		
		sbSizer1.Add( gSizer3, 1, wx.EXPAND, 2 )
		
		
		gSizer31.Add( sbSizer1, 1, wx.EXPAND, 2 )
		
		sbSizer6 = wx.StaticBoxSizer( wx.StaticBox( self.m_panelAPI, wx.ID_ANY, _(u"Other") ), wx.VERTICAL )
		
		
		gSizer31.Add( sbSizer6, 1, wx.EXPAND, 5 )
		
		
		bSizer12.Add( gSizer31, 1, wx.EXPAND, 5 )
		
		
		self.m_panelAPI.SetSizer( bSizer12 )
		self.m_panelAPI.Layout()
		bSizer12.Fit( self.m_panelAPI )
		self.m_notebook1.AddPage( self.m_panelAPI, _(u"API Info"), False )
		
		bSizer4.Add( self.m_notebook1, 1, wx.EXPAND |wx.ALL, 0 )
		
		
		self.m_panel1.SetSizer( bSizer4 )
		self.m_panel1.Layout()
		bSizer4.Fit( self.m_panel1 )
		mainSizer.Add( self.m_panel1, 1, wx.EXPAND |wx.ALL, 1 )
		
		bSizer6 = wx.BoxSizer( wx.HORIZONTAL )
		
		self.m_btnRefresh = wx.Button( self, wx.ID_ANY, _(u"Refresh"), wx.DefaultPosition, wx.DefaultSize, 0 )
		bSizer6.Add( self.m_btnRefresh, 0, wx.ALIGN_CENTER|wx.ALL, 2 )
		
		m_sdbSizer1 = wx.StdDialogButtonSizer()
		self.m_sdbSizer1OK = wx.Button( self, wx.ID_OK )
		m_sdbSizer1.AddButton( self.m_sdbSizer1OK )
		self.m_sdbSizer1Apply = wx.Button( self, wx.ID_APPLY )
		m_sdbSizer1.AddButton( self.m_sdbSizer1Apply )
		self.m_sdbSizer1Cancel = wx.Button( self, wx.ID_CANCEL )
		m_sdbSizer1.AddButton( self.m_sdbSizer1Cancel )
		m_sdbSizer1.Realize();
		
		bSizer6.Add( m_sdbSizer1, 1, wx.ALIGN_CENTER_VERTICAL, 2 )
		
		
		mainSizer.Add( bSizer6, 0, wx.EXPAND, 2 )
		
		
		self.SetSizer( mainSizer )
		self.Layout()
		
		self.Centre( wx.BOTH )
		
		# Connect Events
		self.Bind( wx.EVT_ACTIVATE_APP, self.OnActivateApp )
		self.Bind( wx.EVT_CLOSE, self.OnCloseFrame )
		self.m_listCtrlRxInDevices.Bind( wx.EVT_LIST_ITEM_SELECTED, self.OnRxInDeviceSelect )
		self.m_listCtrlRxOutDevices.Bind( wx.EVT_LIST_ITEM_SELECTED, self.OnRxOutDeviceSelect )
		self.m_listCtrlTxInDevices.Bind( wx.EVT_LIST_ITEM_SELECTED, self.OnTxInDeviceSelect )
		self.m_listCtrlTxOutDevices.Bind( wx.EVT_LIST_ITEM_SELECTED, self.OnTxOutDeviceSelect )
		self.m_btnRefresh.Bind( wx.EVT_BUTTON, self.OnRefreshClick )
		self.m_sdbSizer1Apply.Bind( wx.EVT_BUTTON, self.OnApplyAudioParameters )
		self.m_sdbSizer1Cancel.Bind( wx.EVT_BUTTON, self.OnCancelAudioParameters )
		self.m_sdbSizer1OK.Bind( wx.EVT_BUTTON, self.OnOkAudioParameters )
	
	def __del__( self ):
		pass
	
	
	# Virtual event handlers, overide them in your derived class
	def OnActivateApp( self, event ):
		event.Skip()
	
	def OnCloseFrame( self, event ):
		event.Skip()
	
	def OnRxInDeviceSelect( self, event ):
		event.Skip()
	
	def OnRxOutDeviceSelect( self, event ):
		event.Skip()
	
	def OnTxInDeviceSelect( self, event ):
		event.Skip()
	
	def OnTxOutDeviceSelect( self, event ):
		event.Skip()
	
	def OnRefreshClick( self, event ):
		event.Skip()
	
	def OnApplyAudioParameters( self, event ):
		event.Skip()
	
	def OnCancelAudioParameters( self, event ):
		event.Skip()
	
	def OnOkAudioParameters( self, event ):
		event.Skip()
	

